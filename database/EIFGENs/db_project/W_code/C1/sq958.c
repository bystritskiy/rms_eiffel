/*
 * Code for class SQLITE_OPEN_MODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F958_7128(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7129(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7130(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7131(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit958(void);

#ifdef __cplusplus
}
#endif

#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F958_7128
static EIF_INTEGER_32 inline_F958_7128 (void)
{
	return SQLITE_OPEN_READONLY
	;
}
#define INLINE_F958_7128
#endif
#ifndef INLINE_F958_7129
static EIF_INTEGER_32 inline_F958_7129 (void)
{
	return SQLITE_OPEN_READWRITE
	;
}
#define INLINE_F958_7129
#endif
#ifndef INLINE_F958_7130
static EIF_INTEGER_32 inline_F958_7130 (void)
{
	return SQLITE_OPEN_CREATE | SQLITE_OPEN_READWRITE
	;
}
#define INLINE_F958_7130
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_OPEN_MODE}.read_only */
EIF_TYPED_VALUE F958_7128 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_only";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13282);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(957, Current, 13282);
	RTIV(Current, RTAL);
	Result = inline_F958_7128 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_OPEN_MODE}.read_write */
EIF_TYPED_VALUE F958_7129 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_write";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13283);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(957, Current, 13283);
	RTIV(Current, RTAL);
	Result = inline_F958_7129 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_OPEN_MODE}.create_read_write */
EIF_TYPED_VALUE F958_7130 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_read_write";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13280);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(957, Current, 13280);
	RTIV(Current, RTAL);
	Result = inline_F958_7130 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_OPEN_MODE}.is_valid_open_mode */
EIF_TYPED_VALUE F958_7131 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_open_mode";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 1, 13281);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13281);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5004, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit958 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
