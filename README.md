![NexMon logo](https://github.com/seemoo-lab/bcm-public/raw/master/logo/nexmon-logo-color.png)

# What is nexmon?
Nexmon is our C-based firmware patching framework for Broadcom/Cypress WiFi chips 
that enables you to write your own firmware patches, for example, to enable monitor
mode with radiotap headers and frame injection.

Before we started to work on this repository, we developed patches for the Nexus 5 (with bcm4339 WiFi chip) in the [bcm-public](https://github.com/seemoo-lab/bcm-public)  repository and those for the Raspberry Pi 3 (with bcm43438 WiFi chip) in the [bcm-rpi3](https://github.com/seemoo-lab/bcm-rpi3) repository. To remove the development overhead of maintaining multiple separate repositories, we decided to merge them in this repository and add support for some additional devices. In contrast to the former repositories, here, you can only build the firmware patch without drivers and kernels. The Raspberry Pi 3 makes an exception, as here it is always required to also build the driver.

# WARNING
Our software may damage your hardware and may void your hardware’s warranty! You use our tools at your own risk and responsibility! If you don't like these terms, don't use nexmon!

# Supported Devices
The following devices are currently supported by our nexmon firmware patch.

WiFi Chip | Firmware Version | Used in           | Operating System |  M  | RT  |  I  | FP  | UC  | CT 
--------- | ---------------- | ----------------- | ---------------- | --- | --- | --- | --- | --- | ---
bcm4330   | 5_90_100_41_sta  | Samsung Galaxy S2 | Cyanogenmod 13.0 |  X  |  X  |     |  X  |  X  |  X 
bcm4339   | 6_37_34_43       | Nexus 5           | Android 6 Stock  |  X  |  X  |  X  |  X  |  X  |  X 
bcm43438  | 7_45_41_26       | Raspberry Pi 3    | Raspbian 8       |  X  |  X  |  X  |  X  |     |  X 
bcm4358   | 7_112_200_17_sta | Nexus 6P          | Android 7 Stock  |  X  |  X  |     |  X  |  X  |  X 

## Legend
- M = Monitor Mode
- RT = Monitor Mode with RadioTap headers
- I = Frame Injection
- FP = Flash Patching
- UC = Ucode Compression
- CT = c't Article Support

# Steps to create your own firmware patches

## Build patches for bcm4330, bcm4339 and bcm4358 using a x86 computer running Linux (e.g. Ubuntu 16.04)
* Install some dependencies: `sudo apt-get install git gawk adb`
* **Only necessary for x86_64 systems**, install i386 libs: 

  ```
  sudo dpkg --add-architecture i386
  sudo apt-get update
  sudo apt-get install libc6:i386 libncurses5:i386 libstdc++6:i386
  ```
* Clone our repository: `git clone https://github.com/seemoo-lab/nexmon.git`
* In the root directory of the repository: `cd nexmon`
  * Setup the build environment: `source setup_env.sh`
  * Compile some build tools and extract the ucode and flashpatches from the original firmware files: `make`
* Go to the *patches* folder of your target device (e.g. bcm4339 for the Nexus 5): `cd patches/bcm4339/6_37_34_43/nexmon/`
  * Compile a patched firmware: `make`
  * Generate a backup of your original firmware file: `make backup-firmware`
  * Install the patched firmware on your smartphone: `make install-firmware` (make sure your smartphone is connected to your machine beforehand)

### Using the Monitor Mode patch
* Install at least *nexutil* and *libfakeioctl* from our utilities. The easiest way to do this is by using this app: https://play.google.com/store/apps/details?id=de.tu_darmstadt.seemoo.nexmon. But you can also build it from the source by executing `make` in the *utilties* folder (Note: you will need the Android NDK properly installed for this).
* Connect to your Android phone using the ADB tools: `adb shell`
* Make sure you are **not** connected to an access point
* Use *nexutil* to enable monitor mode: `nexutil -m true`
* At this point the monitor mode is active. There is no need to call *airmon-ng*. 
* **Important:** Most tools need a Radiotap interface to work properly. *libfakeioctl* emulates this type of interface for you, therefore, use LD_PRELOAD to load this library when you call the favourite tool (e.g. tcpdump or airodump-ng): `LD_PRELOAD=libfakeioctl.so tcpdump -i wlan0`

## Build patches for bcm43438 on the RPI3 using Raspbian 8 (recommended)
* Upgrade your Raspbian installation: `apt-get update && apt-get upgrade`
* Install the kernel headers to build the driver and some dependencies: `sudo apt install raspberrypi-kernel-headers git libgmp3-dev gawk`
* Clone our repository: `git clone https://github.com/seemoo-lab/nexmon.git`
* Go into the root directory of our repository: `cd nexmon`
  * Setup the build environment: `source setup_env.sh`
  * Compile some build tools and extract the ucode and flashpatches from the original firmware files: `make`
* Go to the *patches* folder for the bcm43438 chipset: `cd patches/bcm43438/7_45_41_26/nexmon/`
  * Compile a patched firmware: `make`
  * Generate a backup of your original firmware file: `make backup-firmware`
  * Install the patched firmware on your smartphone: `make install-firmware`
* *Optional*: remove wpa_supplicant for better control over the WiFi interface: `apt-get remove wpasupplicant`

### Using the Monitor Mode patch
* Our modified driver sets the interface in monitor mode as soon as the interface goes up: `ifconfig wlan0 up`
* At this point the monitor mode is active. There is no need to call *airmon-ng*. 
* The interface already set the Radiotap header, therefore, tools like *tcpdump* or *airodump-ng* can be used out of the box: `tcpdump -i wlan0`
* **Note:** It is not possible to connect to an access point anymore using our modified driver and firmware, if you whant to go back to the default behaviour you will need to load the original driver and firmware.

# Using the Raspberry Pi 3 dd image
* Download the image from here: TODO
* unpack the dd image: `tar xfvz THE_IMAGE.dd`
* copy the image to your SD card, e.g.: `dd if=nexmon_rpi_12-10-2016.dd of=/dev/mmcblk0 bs=1M` note: the SD card device (in this example mmcblk0) may change depending on your setup. Have a look at the [official Raspbian instructions](https://www.raspberrypi.org/documentation/installation/installing-images/linux.md)

# Structure of this repository
* `buildtools`: Contains compilers and other tools to build the firmware
* `firmwares`
  * `<chip version>`
    * `<firmware version>`
      * `<firmware file>`: The original firmware that will be loaded into the RAM of the WiFi Chip
      * `definitions.mk`: Contains mainly firmware specific addresses
      * `structs.h`: Structures only valid for this firmware version
      * `Makefile`: Used to extract flashpatches and ucode
      * `flashpatches.c` (generated by Makefile): Contains flashpatches
      * `ucode.bin` (extracted by Makefile): Contains uncompressed Ucode
    * `structs.common.h`: Structures that are common between firmware versions
* `patches`
  * `<chip version>`
    * `<firmware version>`
      * `nexmon`
        * `Makefile`: Used to build the firmware
        * `patch.ld`: Linker file
        * `src`
          * `patch.c`: General patches to the firmware
          * `injection.c`: Code related to frame injection
          * `monitormode.c`: Code related to monitor mode with radiotap headers
          * `ioctl.c`: Handling of custom IOCTLs
          * ...
        * `obj` (generated by Makefile): Object files created from C files
        * `log` (generated by Makefile): Logs written during compilation
        * `gen` (generated by Makefile): Files generated during the build process
          * `nexmon.pre` (generated by gcc plugin): Extracted at-attributes and targetregion-pragmas
          * `nexmon.ld` (generated from nexmon.pre): Linker file use to place patch code at defined addresses in the firmware
          * `nexmon.mk` (generated from nexmon.pre): Make file used take code from patch.elf and place it into firmware
          * `flashpatches.ld` (generated from nexmon.pre): Linker file that places flashpatches at target locations in firmware ROM
          * `flashpatches.mk` (generated from nexmon.pre): Make file used to insert flashpatch config and data structures into firmware
          * `patch.elf` (generated from object files and linker scripts): contains the newly compiled code placed at predefined addresses
    * `common`
      * `wrapper.c`: Wrappers for functions that already exist in the firmware
      * `ucode_compression.c`: [tinflate](http://achurch.org/tinflate.c) based ucode decompression
      * `radiotap.c`: RadioTap header parser
      * `helper.c`: Helpful utility functions
    * `include`: Common include files
      * `firmware_version.h`: Definitions of chip and firmware versions
      * `patcher.h`: Macros use to perform patching for existing firmware code (e.g., BPatch patches a branch instruction)
      * `capabilities.h`: Allows to indicate capabilities (such as, monitor mode and frame injection)
      * `nexioctl.h`: Defines custom IOCTL numbers

# Related Projects
* [bcmon](https://bcmon.blogspot.de/): Monitor Mode and Frame Injection for the bcm4329 and bcm4330
* [monmob](https://github.com/tuter/monmob): Monitor Mode and Frame Injection for the bcm4325, bcm4329 and bcm4330
* [imon](https://imon.site/): Penetration Testing for Apple devices with Broadcom WiFi Chip

# Contact
* [Matthias Schulz](https://seemoo.tu-darmstadt.de/mschulz) <mschulz@seemoo.tu-darmstadt.de>
* Daniel Wegemer <dwegemer@seemoo.tu-darmstadt.de>
