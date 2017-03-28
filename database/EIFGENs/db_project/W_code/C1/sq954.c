/*
 * Code for class SQLITE_EXPERIMENTAL_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F954_7042(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit954(void);

#ifdef __cplusplus
}
#endif

#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F954_7042
static EIF_INTEGER_32 inline_F954_7042 (EIF_INTEGER_32 arg1)
{
	return (EIF_INTEGER)sqlite3_config((int)arg1);
	;
}
#define INLINE_F954_7042
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_EXPERIMENTAL_EXTERNALS}.c_sqlite3_config */
EIF_TYPED_VALUE F954_7042 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_sqlite3_config";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 953, Current, 0, 1, 13194);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(953, Current, 13194);
	RTIV(Current, RTAL);
	Result = inline_F954_7042 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit954 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
