/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "wrapper32.h"
#include "emu/x64emu_private.h"
#include "emu/x87emu_private.h"
#include "regs.h"
#include "x64emu.h"
#include "box32.h"
#include "converter32.h"

typedef union ui64_s {
    int64_t     i;
    uint64_t    u;
    uint32_t    d[2];
} ui64_t;

typedef struct _2uint_struct_s {
	uint32_t	a;
	uint32_t	b;
} _2uint_struct_t;

extern void* my__IO_2_1_stderr_;
extern void* my__IO_2_1_stdin_ ;
extern void* my__IO_2_1_stdout_;

static void* io_convert(void* v)
{
	if(!v)
		return v;
	if(v==my__IO_2_1_stderr_)
		return stderr;
	if(v==my__IO_2_1_stdin_)
		return stdin;
	if(v==my__IO_2_1_stdout_)
		return stdout;
	return v;
}

typedef struct my_GValue_s
{
  int         g_type;
  union {
    int        v_int;
    int64_t    v_int64;
    uint64_t   v_uint64;
    float      v_float;
    double     v_double;
    void*      v_pointer;
  } data[2];
} my_GValue_t;

static void alignGValue(my_GValue_t* v, void* value)
{
    v->g_type = *(int*)value;
    memcpy(v->data, value+4, 2*sizeof(double));
}
static void unalignGValue(void* value, my_GValue_t* v)
{
    *(int*)value = v->g_type;
    memcpy(value+4, v->data, 2*sizeof(double));
}

void* VulkanFromx86(void* src, void** save);
void VulkanTox86(void* src, void* save);

#define ST0val ST0.d

int of_convert32(int);

typedef void (*vFv_t)(void);
typedef void (*vFi_t)(int32_t);
typedef void (*vFu_t)(uint32_t);
typedef void (*vFp_t)(void*);
typedef void (*vFA_t)(void*);
typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFi_t)(int32_t);
typedef int32_t (*iFI_t)(int64_t);
typedef int32_t (*iFu_t)(uint32_t);
typedef int32_t (*iFf_t)(float);
typedef int32_t (*iFd_t)(double);
typedef int32_t (*iFL_t)(uintptr_t);
typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFh_t)(uintptr_t);
typedef int32_t (*iFH_t)(uintptr_t);
typedef int64_t (*IFf_t)(float);
typedef int64_t (*IFd_t)(double);
typedef uint32_t (*uFv_t)(void);
typedef uint32_t (*uFu_t)(uint32_t);
typedef uint32_t (*uFU_t)(uint64_t);
typedef uint64_t (*UFs_t)(void*);
typedef float (*fFf_t)(float);
typedef double (*dFv_t)(void);
typedef double (*dFd_t)(double);
typedef intptr_t (*lFi_t)(int32_t);
typedef intptr_t (*lFp_t)(void*);
typedef uintptr_t (*LFv_t)(void);
typedef uintptr_t (*LFL_t)(uintptr_t);
typedef void* (*pFu_t)(uint32_t);
typedef void* (*pFL_t)(uintptr_t);
typedef uintptr_t (*hFv_t)(void);
typedef void* (*aFa_t)(void*);
typedef void (*vFEv_t)(x64emu_t*);
typedef void (*vFEp_t)(x64emu_t*, void*);
typedef int32_t (*iFEv_t)(x64emu_t*);
typedef int32_t (*iFEi_t)(x64emu_t*, int32_t);
typedef int32_t (*iFEL_t)(x64emu_t*, uintptr_t);
typedef int32_t (*iFEp_t)(x64emu_t*, void*);
typedef int32_t (*iFEh_t)(x64emu_t*, uintptr_t);
typedef int32_t (*iFEO_t)(x64emu_t*, int32_t);
typedef int32_t (*iFii_t)(int32_t, int32_t);
typedef int32_t (*iFiI_t)(int32_t, int64_t);
typedef int32_t (*iFiu_t)(int32_t, uint32_t);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFuu_t)(uint32_t, uint32_t);
typedef int32_t (*iFup_t)(uint32_t, void*);
typedef int32_t (*iFli_t)(intptr_t, int32_t);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFhp_t)(uintptr_t, void*);
typedef int32_t (*iFhh_t)(uintptr_t, uintptr_t);
typedef int64_t (*IFII_t)(int64_t, int64_t);
typedef uint32_t (*uFEu_t)(x64emu_t*, uint32_t);
typedef uint32_t (*uFEV_t)(x64emu_t*, void*);
typedef uint32_t (*uFpa_t)(void*, void*);
typedef uint64_t (*UFii_t)(int32_t, int32_t);
typedef uint64_t (*UFUU_t)(uint64_t, uint64_t);
typedef uint64_t (*UFss_t)(void*, void*);
typedef float (*fFif_t)(int32_t, float);
typedef float (*fFfi_t)(float, int32_t);
typedef float (*fFff_t)(float, float);
typedef float (*fFfD_t)(float, long double);
typedef float (*fFfp_t)(float, void*);
typedef double (*dFid_t)(int32_t, double);
typedef double (*dFdi_t)(double, int32_t);
typedef double (*dFdd_t)(double, double);
typedef double (*dFdD_t)(double, long double);
typedef double (*dFdp_t)(double, void*);
typedef uintptr_t (*LFpp_t)(void*, void*);
typedef void* (*pFEv_t)(x64emu_t*);
typedef void* (*pFEp_t)(x64emu_t*, void*);
typedef void* (*pFLL_t)(uintptr_t, uintptr_t);
typedef void* (*aFia_t)(int32_t, void*);
typedef int32_t (*iFHBp__t)(uintptr_t, struct_p_t*);
typedef void (*vFEip_t)(x64emu_t*, int32_t, void*);
typedef void (*vFEpi_t)(x64emu_t*, void*, int32_t);
typedef void (*vFEpu_t)(x64emu_t*, void*, uint32_t);
typedef void (*vFfpp_t)(float, void*, void*);
typedef void (*vFdpp_t)(double, void*, void*);
typedef int32_t (*iFEpi_t)(x64emu_t*, void*, int32_t);
typedef int32_t (*iFEpL_t)(x64emu_t*, void*, uintptr_t);
typedef int32_t (*iFEpp_t)(x64emu_t*, void*, void*);
typedef int32_t (*iFEpV_t)(x64emu_t*, void*, void*);
typedef int32_t (*iFiii_t)(int32_t, int32_t, int32_t);
typedef int32_t (*iFiiI_t)(int32_t, int32_t, int64_t);
typedef int32_t (*iFiiu_t)(int32_t, int32_t, uint32_t);
typedef int32_t (*iFiiO_t)(int32_t, int32_t, int32_t);
typedef int32_t (*iFiII_t)(int32_t, int64_t, int64_t);
typedef int32_t (*iFiuu_t)(int32_t, uint32_t, uint32_t);
typedef int32_t (*iFiLN_t)(int32_t, uintptr_t, ...);
typedef int32_t (*iFipp_t)(int32_t, void*, void*);
typedef int32_t (*iFuii_t)(uint32_t, int32_t, int32_t);
typedef int32_t (*iFuip_t)(uint32_t, int32_t, void*);
typedef int32_t (*iFuui_t)(uint32_t, uint32_t, int32_t);
typedef int32_t (*iFuuu_t)(uint32_t, uint32_t, uint32_t);
typedef int32_t (*iFuLp_t)(uint32_t, uintptr_t, void*);
typedef int32_t (*iFupp_t)(uint32_t, void*, void*);
typedef int32_t (*iFpiu_t)(void*, int32_t, uint32_t);
typedef int32_t (*iFpip_t)(void*, int32_t, void*);
typedef int32_t (*iFpuu_t)(void*, uint32_t, uint32_t);
typedef int32_t (*iFppu_t)(void*, void*, uint32_t);
typedef int32_t (*iFppL_t)(void*, void*, uintptr_t);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFpOu_t)(void*, int32_t, uint32_t);
typedef int64_t (*IFiIi_t)(int32_t, int64_t, int32_t);
typedef float (*fFfff_t)(float, float, float);
typedef float (*fFffp_t)(float, float, void*);
typedef double (*dFddd_t)(double, double, double);
typedef double (*dFddp_t)(double, double, void*);
typedef void* (*pFEip_t)(x64emu_t*, int32_t, void*);
typedef void* (*pFppL_t)(void*, void*, uintptr_t);
typedef void* (*pFpOM_t)(void*, int32_t, ...);
typedef uintptr_t (*hFEpp_t)(x64emu_t*, void*, void*);
typedef void* (*aFipa_t)(int32_t, void*, void*);
typedef intptr_t (*lFpBp_i_t)(void*, struct_p_t*, int32_t);
typedef void (*vFEipV_t)(x64emu_t*, int32_t, void*, void*);
typedef void (*vFEppp_t)(x64emu_t*, void*, void*, void*);
typedef int32_t (*iFEiiN_t)(x64emu_t*, int32_t, int32_t, ...);
typedef int32_t (*iFEipp_t)(x64emu_t*, int32_t, void*, void*);
typedef int32_t (*iFELup_t)(x64emu_t*, uintptr_t, uint32_t, void*);
typedef int32_t (*iFEpup_t)(x64emu_t*, void*, uint32_t, void*);
typedef int32_t (*iFEppu_t)(x64emu_t*, void*, void*, uint32_t);
typedef int32_t (*iFEppL_t)(x64emu_t*, void*, void*, uintptr_t);
typedef int32_t (*iFEppp_t)(x64emu_t*, void*, void*, void*);
typedef int32_t (*iFiiII_t)(int32_t, int32_t, int64_t, int64_t);
typedef int32_t (*iFiuui_t)(int32_t, uint32_t, uint32_t, int32_t);
typedef uintptr_t (*LFpLLh_t)(void*, uintptr_t, uintptr_t, uintptr_t);
typedef void* (*pFppuL_t)(void*, void*, uint32_t, uintptr_t);
typedef void* (*pFppLL_t)(void*, void*, uintptr_t, uintptr_t);
typedef int32_t (*iFEppiV_t)(x64emu_t*, void*, void*, int32_t, void*);
typedef int32_t (*iFiLLLL_t)(int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
typedef int32_t (*iFEBh_ppp_t)(x64emu_t*, struct_h_t*, void*, void*, void*);
typedef int32_t (*iFEpippppp_t)(x64emu_t*, void*, int32_t, void*, void*, void*, void*, void*);

#if defined(HAVE_LD80BITS)
typedef long double (*DFD_t)(long double);
typedef long double (*DFDD_t)(long double, long double);
typedef long double (*DFDp_t)(long double, void*);
#endif

#if !defined(HAVE_LD80BITS)
typedef double (*KFK_t)(double);
typedef double (*KFKK_t)(double, double);
typedef double (*KFKp_t)(double, void*);
#endif

void vFv_32(x64emu_t *emu, uintptr_t fcn) { vFv_t fn = (vFv_t)fcn; fn(); }
void vFi_32(x64emu_t *emu, uintptr_t fcn) { vFi_t fn = (vFi_t)fcn; fn(from_ptri(int32_t, R_ESP + 4)); }
void vFu_32(x64emu_t *emu, uintptr_t fcn) { vFu_t fn = (vFu_t)fcn; fn(from_ptri(uint32_t, R_ESP + 4)); }
void vFp_32(x64emu_t *emu, uintptr_t fcn) { vFp_t fn = (vFp_t)fcn; fn(from_ptriv(R_ESP + 4)); }
void vFA_32(x64emu_t *emu, uintptr_t fcn) { vFA_t fn = (vFA_t)fcn; fn(from_locale_d(from_ptri(ptr_t, R_ESP + 4))); }
void iFv_32(x64emu_t *emu, uintptr_t fcn) { iFv_t fn = (iFv_t)fcn; R_EAX = fn(); }
void iFi_32(x64emu_t *emu, uintptr_t fcn) { iFi_t fn = (iFi_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4)); }
void iFI_32(x64emu_t *emu, uintptr_t fcn) { iFI_t fn = (iFI_t)fcn; R_EAX = fn(from_ptri(int64_t, R_ESP + 4)); }
void iFu_32(x64emu_t *emu, uintptr_t fcn) { iFu_t fn = (iFu_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4)); }
void iFf_32(x64emu_t *emu, uintptr_t fcn) { iFf_t fn = (iFf_t)fcn; R_EAX = fn(from_ptri(float, R_ESP + 4)); }
void iFd_32(x64emu_t *emu, uintptr_t fcn) { iFd_t fn = (iFd_t)fcn; R_EAX = fn(from_ptri(double, R_ESP + 4)); }
void iFL_32(x64emu_t *emu, uintptr_t fcn) { iFL_t fn = (iFL_t)fcn; R_EAX = fn(to_ulong(from_ptri(ulong_t, R_ESP + 4))); }
void iFp_32(x64emu_t *emu, uintptr_t fcn) { iFp_t fn = (iFp_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4)); }
void iFh_32(x64emu_t *emu, uintptr_t fcn) { iFh_t fn = (iFh_t)fcn; R_EAX = fn(from_hash(from_ptri(ptr_t, R_ESP + 4))); }
void iFH_32(x64emu_t *emu, uintptr_t fcn) { iFH_t fn = (iFH_t)fcn; R_EAX = fn(from_hash_d(from_ptri(ptr_t, R_ESP + 4))); }
void IFf_32(x64emu_t *emu, uintptr_t fcn) { IFf_t fn = (IFf_t)fcn; ui64_t r; r.i = fn(from_ptri(float, R_ESP + 4)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void IFd_32(x64emu_t *emu, uintptr_t fcn) { IFd_t fn = (IFd_t)fcn; ui64_t r; r.i = fn(from_ptri(double, R_ESP + 4)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void uFv_32(x64emu_t *emu, uintptr_t fcn) { uFv_t fn = (uFv_t)fcn; R_EAX = (uint32_t)fn(); }
void uFu_32(x64emu_t *emu, uintptr_t fcn) { uFu_t fn = (uFu_t)fcn; R_EAX = (uint32_t)fn(from_ptri(uint32_t, R_ESP + 4)); }
void uFU_32(x64emu_t *emu, uintptr_t fcn) { uFU_t fn = (uFU_t)fcn; R_EAX = (uint32_t)fn(from_ptri(uint64_t, R_ESP + 4)); }
void UFs_32(x64emu_t *emu, uintptr_t fcn) { UFs_t fn = (UFs_t)fcn; ui64_t r; r.u = (uint64_t)fn(from_ptrv(R_ESP + 4)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void fFf_32(x64emu_t *emu, uintptr_t fcn) { fFf_t fn = (fFf_t)fcn; float fl = fn(from_ptri(float, R_ESP + 4)); fpu_do_push(emu); ST0val = fl; }
void dFv_32(x64emu_t *emu, uintptr_t fcn) { dFv_t fn = (dFv_t)fcn; double db = fn(); fpu_do_push(emu); ST0val = db; }
void dFd_32(x64emu_t *emu, uintptr_t fcn) { dFd_t fn = (dFd_t)fcn; double db = fn(from_ptri(double, R_ESP + 4)); fpu_do_push(emu); ST0val = db; }
void lFi_32(x64emu_t *emu, uintptr_t fcn) { lFi_t fn = (lFi_t)fcn; R_EAX = to_long(fn(from_ptri(int32_t, R_ESP + 4))); }
void lFp_32(x64emu_t *emu, uintptr_t fcn) { lFp_t fn = (lFp_t)fcn; R_EAX = to_long(fn(from_ptriv(R_ESP + 4))); }
void LFv_32(x64emu_t *emu, uintptr_t fcn) { LFv_t fn = (LFv_t)fcn; R_EAX = to_ulong(fn()); }
void LFL_32(x64emu_t *emu, uintptr_t fcn) { LFL_t fn = (LFL_t)fcn; R_EAX = to_ulong(fn(to_ulong(from_ptri(ulong_t, R_ESP + 4)))); }
void pFu_32(x64emu_t *emu, uintptr_t fcn) { pFu_t fn = (pFu_t)fcn; R_EAX = to_ptrv(fn(from_ptri(uint32_t, R_ESP + 4))); }
void pFL_32(x64emu_t *emu, uintptr_t fcn) { pFL_t fn = (pFL_t)fcn; R_EAX = to_ptrv(fn(to_ulong(from_ptri(ulong_t, R_ESP + 4)))); }
void hFv_32(x64emu_t *emu, uintptr_t fcn) { hFv_t fn = (hFv_t)fcn; R_EAX = to_hash(fn()); }
void aFa_32(x64emu_t *emu, uintptr_t fcn) { aFa_t fn = (aFa_t)fcn; R_EAX = to_locale(fn(from_locale(from_ptri(ptr_t, R_ESP + 4)))); }
void vFEv_32(x64emu_t *emu, uintptr_t fcn) { vFEv_t fn = (vFEv_t)fcn; fn(emu); }
void vFEp_32(x64emu_t *emu, uintptr_t fcn) { vFEp_t fn = (vFEp_t)fcn; fn(emu, from_ptriv(R_ESP + 4)); }
void iFEv_32(x64emu_t *emu, uintptr_t fcn) { iFEv_t fn = (iFEv_t)fcn; R_EAX = fn(emu); }
void iFEi_32(x64emu_t *emu, uintptr_t fcn) { iFEi_t fn = (iFEi_t)fcn; R_EAX = fn(emu, from_ptri(int32_t, R_ESP + 4)); }
void iFEL_32(x64emu_t *emu, uintptr_t fcn) { iFEL_t fn = (iFEL_t)fcn; R_EAX = fn(emu, to_ulong(from_ptri(ulong_t, R_ESP + 4))); }
void iFEp_32(x64emu_t *emu, uintptr_t fcn) { iFEp_t fn = (iFEp_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4)); }
void iFEh_32(x64emu_t *emu, uintptr_t fcn) { iFEh_t fn = (iFEh_t)fcn; R_EAX = fn(emu, from_hash(from_ptri(ptr_t, R_ESP + 4))); }
void iFEO_32(x64emu_t *emu, uintptr_t fcn) { iFEO_t fn = (iFEO_t)fcn; R_EAX = fn(emu, of_convert32(from_ptri(int32_t, R_ESP + 4))); }
void iFii_32(x64emu_t *emu, uintptr_t fcn) { iFii_t fn = (iFii_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8)); }
void iFiI_32(x64emu_t *emu, uintptr_t fcn) { iFiI_t fn = (iFiI_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int64_t, R_ESP + 8)); }
void iFiu_32(x64emu_t *emu, uintptr_t fcn) { iFiu_t fn = (iFiu_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(uint32_t, R_ESP + 8)); }
void iFip_32(x64emu_t *emu, uintptr_t fcn) { iFip_t fn = (iFip_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptriv(R_ESP + 8)); }
void iFuu_32(x64emu_t *emu, uintptr_t fcn) { iFuu_t fn = (iFuu_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), from_ptri(uint32_t, R_ESP + 8)); }
void iFup_32(x64emu_t *emu, uintptr_t fcn) { iFup_t fn = (iFup_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), from_ptriv(R_ESP + 8)); }
void iFli_32(x64emu_t *emu, uintptr_t fcn) { iFli_t fn = (iFli_t)fcn; R_EAX = fn(to_long(from_ptri(long_t, R_ESP + 4)), from_ptri(int32_t, R_ESP + 8)); }
void iFpi_32(x64emu_t *emu, uintptr_t fcn) { iFpi_t fn = (iFpi_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptri(int32_t, R_ESP + 8)); }
void iFpp_32(x64emu_t *emu, uintptr_t fcn) { iFpp_t fn = (iFpp_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8)); }
void iFhp_32(x64emu_t *emu, uintptr_t fcn) { iFhp_t fn = (iFhp_t)fcn; R_EAX = fn(from_hash(from_ptri(ptr_t, R_ESP + 4)), from_ptriv(R_ESP + 8)); }
void iFhh_32(x64emu_t *emu, uintptr_t fcn) { iFhh_t fn = (iFhh_t)fcn; R_EAX = fn(from_hash(from_ptri(ptr_t, R_ESP + 4)), from_hash(from_ptri(ptr_t, R_ESP + 8))); }
void IFII_32(x64emu_t *emu, uintptr_t fcn) { IFII_t fn = (IFII_t)fcn; ui64_t r; r.i = fn(from_ptri(int64_t, R_ESP + 4), from_ptri(int64_t, R_ESP + 12)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void uFEu_32(x64emu_t *emu, uintptr_t fcn) { uFEu_t fn = (uFEu_t)fcn; R_EAX = (uint32_t)fn(emu, from_ptri(uint32_t, R_ESP + 4)); }
void uFEV_32(x64emu_t *emu, uintptr_t fcn) { uFEV_t fn = (uFEV_t)fcn; R_EAX = (uint32_t)fn(emu, from_ptrv(R_ESP + 4)); }
void uFpa_32(x64emu_t *emu, uintptr_t fcn) { uFpa_t fn = (uFpa_t)fcn; R_EAX = (uint32_t)fn(from_ptriv(R_ESP + 4), from_locale(from_ptri(ptr_t, R_ESP + 8))); }
void UFii_32(x64emu_t *emu, uintptr_t fcn) { UFii_t fn = (UFii_t)fcn; ui64_t r; r.u = (uint64_t)fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void UFUU_32(x64emu_t *emu, uintptr_t fcn) { UFUU_t fn = (UFUU_t)fcn; ui64_t r; r.u = (uint64_t)fn(from_ptri(uint64_t, R_ESP + 4), from_ptri(uint64_t, R_ESP + 12)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void UFss_32(x64emu_t *emu, uintptr_t fcn) { UFss_t fn = (UFss_t)fcn; ui64_t r; r.u = (uint64_t)fn(from_ptrv(R_ESP + 4), from_ptrv(R_ESP + 4)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void fFif_32(x64emu_t *emu, uintptr_t fcn) { fFif_t fn = (fFif_t)fcn; float fl = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(float, R_ESP + 8)); fpu_do_push(emu); ST0val = fl; }
void fFfi_32(x64emu_t *emu, uintptr_t fcn) { fFfi_t fn = (fFfi_t)fcn; float fl = fn(from_ptri(float, R_ESP + 4), from_ptri(int32_t, R_ESP + 8)); fpu_do_push(emu); ST0val = fl; }
void fFff_32(x64emu_t *emu, uintptr_t fcn) { fFff_t fn = (fFff_t)fcn; float fl = fn(from_ptri(float, R_ESP + 4), from_ptri(float, R_ESP + 8)); fpu_do_push(emu); ST0val = fl; }
void fFfD_32(x64emu_t *emu, uintptr_t fcn) { fFfD_t fn = (fFfD_t)fcn; float fl = fn(from_ptri(float, R_ESP + 4), LD2localLD(from_ptrv(R_ESP + 8))); fpu_do_push(emu); ST0val = fl; }
void fFfp_32(x64emu_t *emu, uintptr_t fcn) { fFfp_t fn = (fFfp_t)fcn; float fl = fn(from_ptri(float, R_ESP + 4), from_ptriv(R_ESP + 8)); fpu_do_push(emu); ST0val = fl; }
void dFid_32(x64emu_t *emu, uintptr_t fcn) { dFid_t fn = (dFid_t)fcn; double db = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(double, R_ESP + 8)); fpu_do_push(emu); ST0val = db; }
void dFdi_32(x64emu_t *emu, uintptr_t fcn) { dFdi_t fn = (dFdi_t)fcn; double db = fn(from_ptri(double, R_ESP + 4), from_ptri(int32_t, R_ESP + 12)); fpu_do_push(emu); ST0val = db; }
void dFdd_32(x64emu_t *emu, uintptr_t fcn) { dFdd_t fn = (dFdd_t)fcn; double db = fn(from_ptri(double, R_ESP + 4), from_ptri(double, R_ESP + 12)); fpu_do_push(emu); ST0val = db; }
void dFdD_32(x64emu_t *emu, uintptr_t fcn) { dFdD_t fn = (dFdD_t)fcn; double db = fn(from_ptri(double, R_ESP + 4), LD2localLD(from_ptrv(R_ESP + 12))); fpu_do_push(emu); ST0val = db; }
void dFdp_32(x64emu_t *emu, uintptr_t fcn) { dFdp_t fn = (dFdp_t)fcn; double db = fn(from_ptri(double, R_ESP + 4), from_ptriv(R_ESP + 12)); fpu_do_push(emu); ST0val = db; }
void LFpp_32(x64emu_t *emu, uintptr_t fcn) { LFpp_t fn = (LFpp_t)fcn; R_EAX = to_ulong(fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8))); }
void pFEv_32(x64emu_t *emu, uintptr_t fcn) { pFEv_t fn = (pFEv_t)fcn; R_EAX = to_ptrv(fn(emu)); }
void pFEp_32(x64emu_t *emu, uintptr_t fcn) { pFEp_t fn = (pFEp_t)fcn; R_EAX = to_ptrv(fn(emu, from_ptriv(R_ESP + 4))); }
void pFLL_32(x64emu_t *emu, uintptr_t fcn) { pFLL_t fn = (pFLL_t)fcn; R_EAX = to_ptrv(fn(to_ulong(from_ptri(ulong_t, R_ESP + 4)), to_ulong(from_ptri(ulong_t, R_ESP + 8)))); }
void aFia_32(x64emu_t *emu, uintptr_t fcn) { aFia_t fn = (aFia_t)fcn; R_EAX = to_locale(fn(from_ptri(int32_t, R_ESP + 4), from_locale(from_ptri(ptr_t, R_ESP + 8)))); }
void iFHBp__32(x64emu_t *emu, uintptr_t fcn) { iFHBp__t fn = (iFHBp__t)fcn; struct_p_t arg_8; R_EAX = fn(from_hash_d(from_ptri(ptr_t, R_ESP + 4)), *(ptr_t*)(from_ptr((R_ESP + 8))) ? &arg_8 : NULL); if (*(ptr_t*)(from_ptr((R_ESP + 8)))) to_struct_p(*(ptr_t*)(from_ptr((R_ESP + 8))), &arg_8); }
void vFEip_32(x64emu_t *emu, uintptr_t fcn) { vFEip_t fn = (vFEip_t)fcn; fn(emu, from_ptri(int32_t, R_ESP + 4), from_ptriv(R_ESP + 8)); }
void vFEpi_32(x64emu_t *emu, uintptr_t fcn) { vFEpi_t fn = (vFEpi_t)fcn; fn(emu, from_ptriv(R_ESP + 4), from_ptri(int32_t, R_ESP + 8)); }
void vFEpu_32(x64emu_t *emu, uintptr_t fcn) { vFEpu_t fn = (vFEpu_t)fcn; fn(emu, from_ptriv(R_ESP + 4), from_ptri(uint32_t, R_ESP + 8)); }
void vFfpp_32(x64emu_t *emu, uintptr_t fcn) { vFfpp_t fn = (vFfpp_t)fcn; fn(from_ptri(float, R_ESP + 4), from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12)); }
void vFdpp_32(x64emu_t *emu, uintptr_t fcn) { vFdpp_t fn = (vFdpp_t)fcn; fn(from_ptri(double, R_ESP + 4), from_ptriv(R_ESP + 12), from_ptriv(R_ESP + 16)); }
void iFEpi_32(x64emu_t *emu, uintptr_t fcn) { iFEpi_t fn = (iFEpi_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptri(int32_t, R_ESP + 8)); }
void iFEpL_32(x64emu_t *emu, uintptr_t fcn) { iFEpL_t fn = (iFEpL_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), to_ulong(from_ptri(ulong_t, R_ESP + 8))); }
void iFEpp_32(x64emu_t *emu, uintptr_t fcn) { iFEpp_t fn = (iFEpp_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8)); }
void iFEpV_32(x64emu_t *emu, uintptr_t fcn) { iFEpV_t fn = (iFEpV_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptrv(R_ESP + 8)); }
void iFiii_32(x64emu_t *emu, uintptr_t fcn) { iFiii_t fn = (iFiii_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptri(int32_t, R_ESP + 12)); }
void iFiiI_32(x64emu_t *emu, uintptr_t fcn) { iFiiI_t fn = (iFiiI_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptri(int64_t, R_ESP + 12)); }
void iFiiu_32(x64emu_t *emu, uintptr_t fcn) { iFiiu_t fn = (iFiiu_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptri(uint32_t, R_ESP + 12)); }
void iFiiO_32(x64emu_t *emu, uintptr_t fcn) { iFiiO_t fn = (iFiiO_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), of_convert32(from_ptri(int32_t, R_ESP + 12))); }
void iFiII_32(x64emu_t *emu, uintptr_t fcn) { iFiII_t fn = (iFiII_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int64_t, R_ESP + 8), from_ptri(int64_t, R_ESP + 16)); }
void iFiuu_32(x64emu_t *emu, uintptr_t fcn) { iFiuu_t fn = (iFiuu_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(uint32_t, R_ESP + 8), from_ptri(uint32_t, R_ESP + 12)); }
void iFiLN_32(x64emu_t *emu, uintptr_t fcn) { iFiLN_t fn = (iFiLN_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), to_ulong(from_ptri(ulong_t, R_ESP + 8)), from_ptriv(R_ESP + 12)); }
void iFipp_32(x64emu_t *emu, uintptr_t fcn) { iFipp_t fn = (iFipp_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFuii_32(x64emu_t *emu, uintptr_t fcn) { iFuii_t fn = (iFuii_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptri(int32_t, R_ESP + 12)); }
void iFuip_32(x64emu_t *emu, uintptr_t fcn) { iFuip_t fn = (iFuip_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFuui_32(x64emu_t *emu, uintptr_t fcn) { iFuui_t fn = (iFuui_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), from_ptri(uint32_t, R_ESP + 8), from_ptri(int32_t, R_ESP + 12)); }
void iFuuu_32(x64emu_t *emu, uintptr_t fcn) { iFuuu_t fn = (iFuuu_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), from_ptri(uint32_t, R_ESP + 8), from_ptri(uint32_t, R_ESP + 12)); }
void iFuLp_32(x64emu_t *emu, uintptr_t fcn) { iFuLp_t fn = (iFuLp_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), to_ulong(from_ptri(ulong_t, R_ESP + 8)), from_ptriv(R_ESP + 12)); }
void iFupp_32(x64emu_t *emu, uintptr_t fcn) { iFupp_t fn = (iFupp_t)fcn; R_EAX = fn(from_ptri(uint32_t, R_ESP + 4), from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFpiu_32(x64emu_t *emu, uintptr_t fcn) { iFpiu_t fn = (iFpiu_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptri(uint32_t, R_ESP + 12)); }
void iFpip_32(x64emu_t *emu, uintptr_t fcn) { iFpip_t fn = (iFpip_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFpuu_32(x64emu_t *emu, uintptr_t fcn) { iFpuu_t fn = (iFpuu_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptri(uint32_t, R_ESP + 8), from_ptri(uint32_t, R_ESP + 12)); }
void iFppu_32(x64emu_t *emu, uintptr_t fcn) { iFppu_t fn = (iFppu_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), from_ptri(uint32_t, R_ESP + 12)); }
void iFppL_32(x64emu_t *emu, uintptr_t fcn) { iFppL_t fn = (iFppL_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), to_ulong(from_ptri(ulong_t, R_ESP + 12))); }
void iFppp_32(x64emu_t *emu, uintptr_t fcn) { iFppp_t fn = (iFppp_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFpOu_32(x64emu_t *emu, uintptr_t fcn) { iFpOu_t fn = (iFpOu_t)fcn; R_EAX = fn(from_ptriv(R_ESP + 4), of_convert32(from_ptri(int32_t, R_ESP + 8)), from_ptri(uint32_t, R_ESP + 12)); }
void IFiIi_32(x64emu_t *emu, uintptr_t fcn) { IFiIi_t fn = (IFiIi_t)fcn; ui64_t r; r.i = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int64_t, R_ESP + 8), from_ptri(int32_t, R_ESP + 16)); R_EAX = r.d[0]; R_EDX = r.d[1]; }
void fFfff_32(x64emu_t *emu, uintptr_t fcn) { fFfff_t fn = (fFfff_t)fcn; float fl = fn(from_ptri(float, R_ESP + 4), from_ptri(float, R_ESP + 8), from_ptri(float, R_ESP + 12)); fpu_do_push(emu); ST0val = fl; }
void fFffp_32(x64emu_t *emu, uintptr_t fcn) { fFffp_t fn = (fFffp_t)fcn; float fl = fn(from_ptri(float, R_ESP + 4), from_ptri(float, R_ESP + 8), from_ptriv(R_ESP + 12)); fpu_do_push(emu); ST0val = fl; }
void dFddd_32(x64emu_t *emu, uintptr_t fcn) { dFddd_t fn = (dFddd_t)fcn; double db = fn(from_ptri(double, R_ESP + 4), from_ptri(double, R_ESP + 12), from_ptri(double, R_ESP + 20)); fpu_do_push(emu); ST0val = db; }
void dFddp_32(x64emu_t *emu, uintptr_t fcn) { dFddp_t fn = (dFddp_t)fcn; double db = fn(from_ptri(double, R_ESP + 4), from_ptri(double, R_ESP + 12), from_ptriv(R_ESP + 20)); fpu_do_push(emu); ST0val = db; }
void pFEip_32(x64emu_t *emu, uintptr_t fcn) { pFEip_t fn = (pFEip_t)fcn; R_EAX = to_ptrv(fn(emu, from_ptri(int32_t, R_ESP + 4), from_ptriv(R_ESP + 8))); }
void pFppL_32(x64emu_t *emu, uintptr_t fcn) { pFppL_t fn = (pFppL_t)fcn; R_EAX = to_ptrv(fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), to_ulong(from_ptri(ulong_t, R_ESP + 12)))); }
void pFpOM_32(x64emu_t *emu, uintptr_t fcn) { pFpOM_t fn = (pFpOM_t)fcn; R_EAX = to_ptrv(fn(from_ptriv(R_ESP + 4), of_convert32(from_ptri(int32_t, R_ESP + 8)), from_ptriv(R_ESP + 12),from_ptriv(R_ESP + 12 + 4))); }
void hFEpp_32(x64emu_t *emu, uintptr_t fcn) { hFEpp_t fn = (hFEpp_t)fcn; R_EAX = to_hash(fn(emu, from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8))); }
void aFipa_32(x64emu_t *emu, uintptr_t fcn) { aFipa_t fn = (aFipa_t)fcn; R_EAX = to_locale(fn(from_ptri(int32_t, R_ESP + 4), from_ptriv(R_ESP + 8), from_locale(from_ptri(ptr_t, R_ESP + 12)))); }
void lFpBp_i_32(x64emu_t *emu, uintptr_t fcn) { lFpBp_i_t fn = (lFpBp_i_t)fcn; struct_p_t arg_8; R_EAX = to_long(fn(from_ptriv(R_ESP + 4), *(ptr_t*)(from_ptr((R_ESP + 8))) ? &arg_8 : NULL, from_ptri(int32_t, R_ESP + 12))); if (*(ptr_t*)(from_ptr((R_ESP + 8)))) to_struct_p(*(ptr_t*)(from_ptr((R_ESP + 8))), &arg_8); }
void vFEipV_32(x64emu_t *emu, uintptr_t fcn) { vFEipV_t fn = (vFEipV_t)fcn; fn(emu, from_ptri(int32_t, R_ESP + 4), from_ptriv(R_ESP + 8), from_ptrv(R_ESP + 12)); }
void vFEppp_32(x64emu_t *emu, uintptr_t fcn) { vFEppp_t fn = (vFEppp_t)fcn; fn(emu, from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFEiiN_32(x64emu_t *emu, uintptr_t fcn) { iFEiiN_t fn = (iFEiiN_t)fcn; R_EAX = fn(emu, from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFEipp_32(x64emu_t *emu, uintptr_t fcn) { iFEipp_t fn = (iFEipp_t)fcn; R_EAX = fn(emu, from_ptri(int32_t, R_ESP + 4), from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFELup_32(x64emu_t *emu, uintptr_t fcn) { iFELup_t fn = (iFELup_t)fcn; R_EAX = fn(emu, to_ulong(from_ptri(ulong_t, R_ESP + 4)), from_ptri(uint32_t, R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFEpup_32(x64emu_t *emu, uintptr_t fcn) { iFEpup_t fn = (iFEpup_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptri(uint32_t, R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFEppu_32(x64emu_t *emu, uintptr_t fcn) { iFEppu_t fn = (iFEppu_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), from_ptri(uint32_t, R_ESP + 12)); }
void iFEppL_32(x64emu_t *emu, uintptr_t fcn) { iFEppL_t fn = (iFEppL_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), to_ulong(from_ptri(ulong_t, R_ESP + 12))); }
void iFEppp_32(x64emu_t *emu, uintptr_t fcn) { iFEppp_t fn = (iFEppp_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12)); }
void iFiiII_32(x64emu_t *emu, uintptr_t fcn) { iFiiII_t fn = (iFiiII_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptri(int64_t, R_ESP + 12), from_ptri(int64_t, R_ESP + 20)); }
void iFiuui_32(x64emu_t *emu, uintptr_t fcn) { iFiuui_t fn = (iFiuui_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), from_ptri(uint32_t, R_ESP + 8), from_ptri(uint32_t, R_ESP + 12), from_ptri(int32_t, R_ESP + 16)); }
void LFpLLh_32(x64emu_t *emu, uintptr_t fcn) { LFpLLh_t fn = (LFpLLh_t)fcn; R_EAX = to_ulong(fn(from_ptriv(R_ESP + 4), to_ulong(from_ptri(ulong_t, R_ESP + 8)), to_ulong(from_ptri(ulong_t, R_ESP + 12)), from_hash(from_ptri(ptr_t, R_ESP + 16)))); }
void pFppuL_32(x64emu_t *emu, uintptr_t fcn) { pFppuL_t fn = (pFppuL_t)fcn; R_EAX = to_ptrv(fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), from_ptri(uint32_t, R_ESP + 12), to_ulong(from_ptri(ulong_t, R_ESP + 16)))); }
void pFppLL_32(x64emu_t *emu, uintptr_t fcn) { pFppLL_t fn = (pFppLL_t)fcn; R_EAX = to_ptrv(fn(from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), to_ulong(from_ptri(ulong_t, R_ESP + 12)), to_ulong(from_ptri(ulong_t, R_ESP + 16)))); }
void iFEppiV_32(x64emu_t *emu, uintptr_t fcn) { iFEppiV_t fn = (iFEppiV_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptriv(R_ESP + 8), from_ptri(int32_t, R_ESP + 12), from_ptrv(R_ESP + 16)); }
void iFiLLLL_32(x64emu_t *emu, uintptr_t fcn) { iFiLLLL_t fn = (iFiLLLL_t)fcn; R_EAX = fn(from_ptri(int32_t, R_ESP + 4), to_ulong(from_ptri(ulong_t, R_ESP + 8)), to_ulong(from_ptri(ulong_t, R_ESP + 12)), to_ulong(from_ptri(ulong_t, R_ESP + 16)), to_ulong(from_ptri(ulong_t, R_ESP + 20))); }
void iFEBh_ppp_32(x64emu_t *emu, uintptr_t fcn) { iFEBh_ppp_t fn = (iFEBh_ppp_t)fcn; struct_h_t arg_4; R_EAX = fn(emu, *(ptr_t*)(from_ptr((R_ESP + 4))) ? &arg_4 : NULL, from_ptriv(R_ESP + 8), from_ptriv(R_ESP + 12), from_ptriv(R_ESP + 16)); if (*(ptr_t*)(from_ptr((R_ESP + 4)))) to_struct_h(*(ptr_t*)(from_ptr((R_ESP + 4))), &arg_4); }
void iFEpippppp_32(x64emu_t *emu, uintptr_t fcn) { iFEpippppp_t fn = (iFEpippppp_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 4), from_ptri(int32_t, R_ESP + 8), from_ptriv(R_ESP + 12), from_ptriv(R_ESP + 16), from_ptriv(R_ESP + 20), from_ptriv(R_ESP + 24), from_ptriv(R_ESP + 28)); }

#if defined(HAVE_LD80BITS)
void DFD_32(x64emu_t *emu, uintptr_t fcn) { DFD_t fn = (DFD_t)fcn; long double ld = fn(LD2localLD(from_ptrv(R_ESP + 4))); fpu_do_push(emu); ST0val = ld; }
void DFDD_32(x64emu_t *emu, uintptr_t fcn) { DFDD_t fn = (DFDD_t)fcn; long double ld = fn(LD2localLD(from_ptrv(R_ESP + 4)), LD2localLD(from_ptrv(R_ESP + 16))); fpu_do_push(emu); ST0val = ld; }
void DFDp_32(x64emu_t *emu, uintptr_t fcn) { DFDp_t fn = (DFDp_t)fcn; long double ld = fn(LD2localLD(from_ptrv(R_ESP + 4)), from_ptriv(R_ESP + 16)); fpu_do_push(emu); ST0val = ld; }
#endif

#if !defined(HAVE_LD80BITS)
void KFK_32(x64emu_t *emu, uintptr_t fcn) { KFK_t fn = (KFK_t)fcn; double db = fn(FromLD(from_ptrv(R_ESP + 4))); fpu_do_push(emu); ST0val = db; }
void KFKK_32(x64emu_t *emu, uintptr_t fcn) { KFKK_t fn = (KFKK_t)fcn; double db = fn(FromLD(from_ptrv(R_ESP + 4)), FromLD(from_ptrv(R_ESP + 16))); fpu_do_push(emu); ST0val = db; }
void KFKp_32(x64emu_t *emu, uintptr_t fcn) { KFKp_t fn = (KFKp_t)fcn; double db = fn(FromLD(from_ptrv(R_ESP + 4)), from_ptriv(R_ESP + 16)); fpu_do_push(emu); ST0val = db; }
#endif

void iFEvpV_32(x64emu_t *emu, uintptr_t fcn) { iFEpV_t fn = (iFEpV_t)fcn; R_EAX = fn(emu, from_ptriv(R_ESP + 8), from_ptrv(R_ESP + 12)); }
void UFsvvs_32(x64emu_t *emu, uintptr_t fcn) { UFss_t fn = (UFss_t)fcn; ui64_t r; r.u = (uint64_t)fn(from_ptrv(R_ESP + 4), from_ptrv(R_ESP + 12)); R_EAX = r.d[0]; R_EDX = r.d[1]; }

int isRetX87Wrapper32(wrapper_t fun) {
	if (fun == &fFf_32) return 1;
	if (fun == &dFv_32) return 1;
	if (fun == &dFd_32) return 1;
	if (fun == &fFif_32) return 1;
	if (fun == &fFfi_32) return 1;
	if (fun == &fFff_32) return 1;
	if (fun == &fFfD_32) return 1;
	if (fun == &fFfp_32) return 1;
	if (fun == &dFid_32) return 1;
	if (fun == &dFdi_32) return 1;
	if (fun == &dFdd_32) return 1;
	if (fun == &dFdD_32) return 1;
	if (fun == &dFdp_32) return 1;
	if (fun == &fFfff_32) return 1;
	if (fun == &fFffp_32) return 1;
	if (fun == &dFddd_32) return 1;
	if (fun == &dFddp_32) return 1;
#if defined(HAVE_LD80BITS)
	if (fun == &DFD_32) return 1;
	if (fun == &DFDD_32) return 1;
	if (fun == &DFDp_32) return 1;
#endif
#if !defined(HAVE_LD80BITS)
	if (fun == &KFK_32) return 1;
	if (fun == &KFKK_32) return 1;
	if (fun == &KFKp_32) return 1;
#endif
	return 0;
}
