/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define CMP_CMN 2
#define CMP_CMP 0
#define DOM_CC_NX_OR_Y 1
#define WCGR1 97
#define DOM_CC_X_OR_Y 2
#define NUM_OF_COND_CMP 4
#define CC_REGNUM 100
#define WCGR3 99
#define SP_REGNUM 13
#define R1_REGNUM 1
#define PC_REGNUM 15
#define WCGR0 96
#define VFPCC_REGNUM 101
#define WCGR2 98
#define R0_REGNUM 0
#define CMN_CMP 1
#define LR_REGNUM 14
#define DOM_CC_X_AND_Y 0
#define CMN_CMN 3
#define IP_REGNUM 12
#define LAST_ARM_REGNUM 15

enum unspec {
  UNSPEC_PUSH_MULT = 0,
  UNSPEC_PIC_SYM = 1,
  UNSPEC_PIC_BASE = 2,
  UNSPEC_PRLG_STK = 3,
  UNSPEC_REGISTER_USE = 4,
  UNSPEC_CHECK_ARCH = 5,
  UNSPEC_WSHUFH = 6,
  UNSPEC_WACC = 7,
  UNSPEC_TMOVMSK = 8,
  UNSPEC_WSAD = 9,
  UNSPEC_WSADZ = 10,
  UNSPEC_WMACS = 11,
  UNSPEC_WMACU = 12,
  UNSPEC_WMACSZ = 13,
  UNSPEC_WMACUZ = 14,
  UNSPEC_CLRDI = 15,
  UNSPEC_WALIGNI = 16,
  UNSPEC_TLS = 17,
  UNSPEC_PIC_LABEL = 18,
  UNSPEC_PIC_OFFSET = 19,
  UNSPEC_GOTSYM_OFF = 20,
  UNSPEC_THUMB1_CASESI = 21,
  UNSPEC_RBIT = 22,
  UNSPEC_SYMBOL_OFFSET = 23,
  UNSPEC_MEMORY_BARRIER = 24,
  UNSPEC_UNALIGNED_LOAD = 25,
  UNSPEC_UNALIGNED_STORE = 26,
  UNSPEC_PIC_UNIFIED = 27,
  UNSPEC_LL = 28,
  UNSPEC_VRINTZ = 29,
  UNSPEC_VRINTP = 30,
  UNSPEC_VRINTM = 31,
  UNSPEC_VRINTR = 32,
  UNSPEC_VRINTX = 33,
  UNSPEC_VRINTA = 34,
  UNSPEC_NONSECURE_MEM = 35,
  UNSPEC_WADDC = 36,
  UNSPEC_WABS = 37,
  UNSPEC_WQMULWMR = 38,
  UNSPEC_WQMULMR = 39,
  UNSPEC_WQMULWM = 40,
  UNSPEC_WQMULM = 41,
  UNSPEC_WQMIAxyn = 42,
  UNSPEC_WQMIAxy = 43,
  UNSPEC_TANDC = 44,
  UNSPEC_TORC = 45,
  UNSPEC_TORVSC = 46,
  UNSPEC_TEXTRC = 47,
  UNSPEC_ASHIFT_SIGNED = 48,
  UNSPEC_ASHIFT_UNSIGNED = 49,
  UNSPEC_CRC32B = 50,
  UNSPEC_CRC32H = 51,
  UNSPEC_CRC32W = 52,
  UNSPEC_CRC32CB = 53,
  UNSPEC_CRC32CH = 54,
  UNSPEC_CRC32CW = 55,
  UNSPEC_AESD = 56,
  UNSPEC_AESE = 57,
  UNSPEC_AESIMC = 58,
  UNSPEC_AESMC = 59,
  UNSPEC_SHA1C = 60,
  UNSPEC_SHA1M = 61,
  UNSPEC_SHA1P = 62,
  UNSPEC_SHA1H = 63,
  UNSPEC_SHA1SU0 = 64,
  UNSPEC_SHA1SU1 = 65,
  UNSPEC_SHA256H = 66,
  UNSPEC_SHA256H2 = 67,
  UNSPEC_SHA256SU0 = 68,
  UNSPEC_SHA256SU1 = 69,
  UNSPEC_VMULLP64 = 70,
  UNSPEC_LOAD_COUNT = 71,
  UNSPEC_VABD_F = 72,
  UNSPEC_VABD_S = 73,
  UNSPEC_VABD_U = 74,
  UNSPEC_VABDL_S = 75,
  UNSPEC_VABDL_U = 76,
  UNSPEC_VADD = 77,
  UNSPEC_VADDHN = 78,
  UNSPEC_VRADDHN = 79,
  UNSPEC_VADDL_S = 80,
  UNSPEC_VADDL_U = 81,
  UNSPEC_VADDW_S = 82,
  UNSPEC_VADDW_U = 83,
  UNSPEC_VBSL = 84,
  UNSPEC_VCAGE = 85,
  UNSPEC_VCAGT = 86,
  UNSPEC_VCEQ = 87,
  UNSPEC_VCGE = 88,
  UNSPEC_VCGEU = 89,
  UNSPEC_VCGT = 90,
  UNSPEC_VCGTU = 91,
  UNSPEC_VCLS = 92,
  UNSPEC_VCONCAT = 93,
  UNSPEC_VCVT = 94,
  UNSPEC_VCVT_S = 95,
  UNSPEC_VCVT_U = 96,
  UNSPEC_VCVT_S_N = 97,
  UNSPEC_VCVT_U_N = 98,
  UNSPEC_VEXT = 99,
  UNSPEC_VHADD_S = 100,
  UNSPEC_VHADD_U = 101,
  UNSPEC_VRHADD_S = 102,
  UNSPEC_VRHADD_U = 103,
  UNSPEC_VHSUB_S = 104,
  UNSPEC_VHSUB_U = 105,
  UNSPEC_VLD1 = 106,
  UNSPEC_VLD1_LANE = 107,
  UNSPEC_VLD2 = 108,
  UNSPEC_VLD2_DUP = 109,
  UNSPEC_VLD2_LANE = 110,
  UNSPEC_VLD3 = 111,
  UNSPEC_VLD3A = 112,
  UNSPEC_VLD3B = 113,
  UNSPEC_VLD3_DUP = 114,
  UNSPEC_VLD3_LANE = 115,
  UNSPEC_VLD4 = 116,
  UNSPEC_VLD4A = 117,
  UNSPEC_VLD4B = 118,
  UNSPEC_VLD4_DUP = 119,
  UNSPEC_VLD4_LANE = 120,
  UNSPEC_VMAX = 121,
  UNSPEC_VMAX_U = 122,
  UNSPEC_VMIN = 123,
  UNSPEC_VMIN_U = 124,
  UNSPEC_VMLA = 125,
  UNSPEC_VMLA_LANE = 126,
  UNSPEC_VMLAL_S = 127,
  UNSPEC_VMLAL_U = 128,
  UNSPEC_VMLAL_S_LANE = 129,
  UNSPEC_VMLAL_U_LANE = 130,
  UNSPEC_VMLS = 131,
  UNSPEC_VMLS_LANE = 132,
  UNSPEC_VMLSL_S = 133,
  UNSPEC_VMLSL_U = 134,
  UNSPEC_VMLSL_S_LANE = 135,
  UNSPEC_VMLSL_U_LANE = 136,
  UNSPEC_VMLSL_LANE = 137,
  UNSPEC_VMOVL_S = 138,
  UNSPEC_VMOVL_U = 139,
  UNSPEC_VMOVN = 140,
  UNSPEC_VMUL = 141,
  UNSPEC_VMULL_P = 142,
  UNSPEC_VMULL_S = 143,
  UNSPEC_VMULL_U = 144,
  UNSPEC_VMUL_LANE = 145,
  UNSPEC_VMULL_S_LANE = 146,
  UNSPEC_VMULL_U_LANE = 147,
  UNSPEC_VPADAL_S = 148,
  UNSPEC_VPADAL_U = 149,
  UNSPEC_VPADD = 150,
  UNSPEC_VPADDL_S = 151,
  UNSPEC_VPADDL_U = 152,
  UNSPEC_VPMAX = 153,
  UNSPEC_VPMAX_U = 154,
  UNSPEC_VPMIN = 155,
  UNSPEC_VPMIN_U = 156,
  UNSPEC_VPSMAX = 157,
  UNSPEC_VPSMIN = 158,
  UNSPEC_VPUMAX = 159,
  UNSPEC_VPUMIN = 160,
  UNSPEC_VQABS = 161,
  UNSPEC_VQADD_S = 162,
  UNSPEC_VQADD_U = 163,
  UNSPEC_VQDMLAL = 164,
  UNSPEC_VQDMLAL_LANE = 165,
  UNSPEC_VQDMLSL = 166,
  UNSPEC_VQDMLSL_LANE = 167,
  UNSPEC_VQDMULH = 168,
  UNSPEC_VQDMULH_LANE = 169,
  UNSPEC_VQRDMULH = 170,
  UNSPEC_VQRDMULH_LANE = 171,
  UNSPEC_VQDMULL = 172,
  UNSPEC_VQDMULL_LANE = 173,
  UNSPEC_VQMOVN_S = 174,
  UNSPEC_VQMOVN_U = 175,
  UNSPEC_VQMOVUN = 176,
  UNSPEC_VQNEG = 177,
  UNSPEC_VQSHL_S = 178,
  UNSPEC_VQSHL_U = 179,
  UNSPEC_VQRSHL_S = 180,
  UNSPEC_VQRSHL_U = 181,
  UNSPEC_VQSHL_S_N = 182,
  UNSPEC_VQSHL_U_N = 183,
  UNSPEC_VQSHLU_N = 184,
  UNSPEC_VQSHRN_S_N = 185,
  UNSPEC_VQSHRN_U_N = 186,
  UNSPEC_VQRSHRN_S_N = 187,
  UNSPEC_VQRSHRN_U_N = 188,
  UNSPEC_VQSHRUN_N = 189,
  UNSPEC_VQRSHRUN_N = 190,
  UNSPEC_VQSUB_S = 191,
  UNSPEC_VQSUB_U = 192,
  UNSPEC_VRECPE = 193,
  UNSPEC_VRECPS = 194,
  UNSPEC_VREV16 = 195,
  UNSPEC_VREV32 = 196,
  UNSPEC_VREV64 = 197,
  UNSPEC_VRSQRTE = 198,
  UNSPEC_VRSQRTS = 199,
  UNSPEC_VSHL_S = 200,
  UNSPEC_VSHL_U = 201,
  UNSPEC_VRSHL_S = 202,
  UNSPEC_VRSHL_U = 203,
  UNSPEC_VSHLL_S_N = 204,
  UNSPEC_VSHLL_U_N = 205,
  UNSPEC_VSHL_N = 206,
  UNSPEC_VSHR_S_N = 207,
  UNSPEC_VSHR_U_N = 208,
  UNSPEC_VRSHR_S_N = 209,
  UNSPEC_VRSHR_U_N = 210,
  UNSPEC_VSHRN_N = 211,
  UNSPEC_VRSHRN_N = 212,
  UNSPEC_VSLI = 213,
  UNSPEC_VSRA_S_N = 214,
  UNSPEC_VSRA_U_N = 215,
  UNSPEC_VRSRA_S_N = 216,
  UNSPEC_VRSRA_U_N = 217,
  UNSPEC_VSRI = 218,
  UNSPEC_VST1 = 219,
  UNSPEC_VST1_LANE = 220,
  UNSPEC_VST2 = 221,
  UNSPEC_VST2_LANE = 222,
  UNSPEC_VST3 = 223,
  UNSPEC_VST3A = 224,
  UNSPEC_VST3B = 225,
  UNSPEC_VST3_LANE = 226,
  UNSPEC_VST4 = 227,
  UNSPEC_VST4A = 228,
  UNSPEC_VST4B = 229,
  UNSPEC_VST4_LANE = 230,
  UNSPEC_VSTRUCTDUMMY = 231,
  UNSPEC_VSUB = 232,
  UNSPEC_VSUBHN = 233,
  UNSPEC_VRSUBHN = 234,
  UNSPEC_VSUBL_S = 235,
  UNSPEC_VSUBL_U = 236,
  UNSPEC_VSUBW_S = 237,
  UNSPEC_VSUBW_U = 238,
  UNSPEC_VTBL = 239,
  UNSPEC_VTBX = 240,
  UNSPEC_VTRN1 = 241,
  UNSPEC_VTRN2 = 242,
  UNSPEC_VTST = 243,
  UNSPEC_VUZP1 = 244,
  UNSPEC_VUZP2 = 245,
  UNSPEC_VZIP1 = 246,
  UNSPEC_VZIP2 = 247,
  UNSPEC_MISALIGNED_ACCESS = 248,
  UNSPEC_VCLE = 249,
  UNSPEC_VCLT = 250,
  UNSPEC_NVRINTZ = 251,
  UNSPEC_NVRINTP = 252,
  UNSPEC_NVRINTM = 253,
  UNSPEC_NVRINTX = 254,
  UNSPEC_NVRINTA = 255,
  UNSPEC_NVRINTN = 256
};
#define NUM_UNSPEC_VALUES 257
extern const char *const unspec_strings[];

enum unspecv {
  VUNSPEC_BLOCKAGE = 0,
  VUNSPEC_EPILOGUE = 1,
  VUNSPEC_THUMB1_INTERWORK = 2,
  VUNSPEC_ALIGN = 3,
  VUNSPEC_POOL_END = 4,
  VUNSPEC_POOL_1 = 5,
  VUNSPEC_POOL_2 = 6,
  VUNSPEC_POOL_4 = 7,
  VUNSPEC_POOL_8 = 8,
  VUNSPEC_POOL_16 = 9,
  VUNSPEC_TMRC = 10,
  VUNSPEC_TMCR = 11,
  VUNSPEC_ALIGN8 = 12,
  VUNSPEC_WCMP_EQ = 13,
  VUNSPEC_WCMP_GTU = 14,
  VUNSPEC_WCMP_GT = 15,
  VUNSPEC_EH_RETURN = 16,
  VUNSPEC_ATOMIC_CAS = 17,
  VUNSPEC_ATOMIC_XCHG = 18,
  VUNSPEC_ATOMIC_OP = 19,
  VUNSPEC_LL = 20,
  VUNSPEC_LDRD_ATOMIC = 21,
  VUNSPEC_SC = 22,
  VUNSPEC_LAX = 23,
  VUNSPEC_SLX = 24,
  VUNSPEC_LDA = 25,
  VUNSPEC_STL = 26,
  VUNSPEC_GET_FPSCR = 27,
  VUNSPEC_SET_FPSCR = 28
};
#define NUM_UNSPECV_VALUES 29
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
