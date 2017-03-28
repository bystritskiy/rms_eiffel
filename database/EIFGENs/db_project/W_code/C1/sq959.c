/*
 * Code for class SQLITE_RESULT_CODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F959_7132(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7133(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7134(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7135(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7136(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7137(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7138(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7139(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7140(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7141(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7142(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7143(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7144(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7145(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7146(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7147(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7148(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7151(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7152(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7153(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7154(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7155(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7156(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7157(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7158(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7159(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7160(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7161(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7162(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7163(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit959(void);

#ifdef __cplusplus
}
#endif

#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_RESULT_CODE}.mask */
EIF_TYPED_VALUE F959_7132 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	return r;
}

/* {SQLITE_RESULT_CODE}.failure_mask */
EIF_TYPED_VALUE F959_7133 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	return r;
}

/* {SQLITE_RESULT_CODE}.ok */
EIF_TYPED_VALUE F959_7134 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ok";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13286);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13286);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_OK;
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

/* {SQLITE_RESULT_CODE}.e_error */
EIF_TYPED_VALUE F959_7135 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_error";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13287);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13287);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_ERROR;
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

/* {SQLITE_RESULT_CODE}.e_internal */
EIF_TYPED_VALUE F959_7136 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_internal";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13288);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13288);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_INTERNAL;
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

/* {SQLITE_RESULT_CODE}.e_perm */
EIF_TYPED_VALUE F959_7137 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_perm";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13289);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13289);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_PERM;
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

/* {SQLITE_RESULT_CODE}.e_abort */
EIF_TYPED_VALUE F959_7138 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_abort";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13290);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13290);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_ABORT;
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

/* {SQLITE_RESULT_CODE}.e_busy */
EIF_TYPED_VALUE F959_7139 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_busy";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13291);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13291);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_BUSY;
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

/* {SQLITE_RESULT_CODE}.e_locked */
EIF_TYPED_VALUE F959_7140 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_locked";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13292);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13292);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_LOCKED;
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

/* {SQLITE_RESULT_CODE}.e_no_mem */
EIF_TYPED_VALUE F959_7141 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_no_mem";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13293);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13293);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOMEM;
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

/* {SQLITE_RESULT_CODE}.e_read_only */
EIF_TYPED_VALUE F959_7142 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_read_only";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13294);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13294);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_READONLY;
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

/* {SQLITE_RESULT_CODE}.e_interrupt */
EIF_TYPED_VALUE F959_7143 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_interrupt";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13295);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13295);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_INTERRUPT;
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

/* {SQLITE_RESULT_CODE}.e_io_err */
EIF_TYPED_VALUE F959_7144 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_io_err";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13296);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13296);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_IOERR;
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

/* {SQLITE_RESULT_CODE}.e_corrupt */
EIF_TYPED_VALUE F959_7145 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_corrupt";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13297);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13297);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_CORRUPT;
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

/* {SQLITE_RESULT_CODE}.e_not_found */
EIF_TYPED_VALUE F959_7146 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_not_found";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13298);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13298);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOTFOUND;
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

/* {SQLITE_RESULT_CODE}.e_full */
EIF_TYPED_VALUE F959_7147 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_full";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13299);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13299);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_FULL;
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

/* {SQLITE_RESULT_CODE}.e_cant_open */
EIF_TYPED_VALUE F959_7148 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_cant_open";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13300);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13300);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_CANTOPEN;
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

/* {SQLITE_RESULT_CODE}.e_protocol */
EIF_TYPED_VALUE F959_7149 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_protocol";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13301);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13301);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_PROTOCOL;
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

/* {SQLITE_RESULT_CODE}.e_empty */
EIF_TYPED_VALUE F959_7150 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_empty";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13302);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13302);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_EMPTY;
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

/* {SQLITE_RESULT_CODE}.e_schema */
EIF_TYPED_VALUE F959_7151 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_schema";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13303);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13303);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_SCHEMA;
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

/* {SQLITE_RESULT_CODE}.e_too_big */
EIF_TYPED_VALUE F959_7152 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_too_big";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13304);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13304);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_TOOBIG;
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

/* {SQLITE_RESULT_CODE}.e_constraint */
EIF_TYPED_VALUE F959_7153 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_constraint";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13305);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13305);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_CONSTRAINT;
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

/* {SQLITE_RESULT_CODE}.e_mismatch */
EIF_TYPED_VALUE F959_7154 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_mismatch";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13306);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13306);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_MISMATCH;
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

/* {SQLITE_RESULT_CODE}.e_misuse */
EIF_TYPED_VALUE F959_7155 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_misuse";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13307);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13307);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_MISUSE;
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

/* {SQLITE_RESULT_CODE}.e_nolfs */
EIF_TYPED_VALUE F959_7156 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_nolfs";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13308);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13308);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOLFS;
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

/* {SQLITE_RESULT_CODE}.e_auth */
EIF_TYPED_VALUE F959_7157 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_auth";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13309);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13309);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_AUTH;
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

/* {SQLITE_RESULT_CODE}.e_format */
EIF_TYPED_VALUE F959_7158 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_format";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13310);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13310);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_FORMAT;
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

/* {SQLITE_RESULT_CODE}.e_range */
EIF_TYPED_VALUE F959_7159 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_range";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13311);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13311);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_RANGE;
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

/* {SQLITE_RESULT_CODE}.e_not_a_db */
EIF_TYPED_VALUE F959_7160 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_not_a_db";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13312);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13312);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOTADB;
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

/* {SQLITE_RESULT_CODE}.row */
EIF_TYPED_VALUE F959_7161 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "row";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13313);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13313);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_ROW;
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

/* {SQLITE_RESULT_CODE}.done */
EIF_TYPED_VALUE F959_7162 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "done";
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
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13314);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(958, Current, 13314);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_DONE;
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

/* {SQLITE_RESULT_CODE}.is_valid_result_code */
EIF_TYPED_VALUE F959_7163 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_result_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_BOOLEAN tb22;
	EIF_BOOLEAN tb23;
	EIF_BOOLEAN tb24;
	EIF_BOOLEAN tb25;
	EIF_BOOLEAN tb26;
	EIF_BOOLEAN tb27;
	EIF_BOOLEAN tb28;
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
	
	RTEAA(l_feature_name, 958, Current, 0, 1, 13315);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(958, Current, 13315);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tb7 = '\01';
	tb8 = '\01';
	tb9 = '\01';
	tb10 = '\01';
	tb11 = '\01';
	tb12 = '\01';
	tb13 = '\01';
	tb14 = '\01';
	tb15 = '\01';
	tb16 = '\01';
	tb17 = '\01';
	tb18 = '\01';
	tb19 = '\01';
	tb20 = '\01';
	tb21 = '\01';
	tb22 = '\01';
	tb23 = '\01';
	tb24 = '\01';
	tb25 = '\01';
	tb26 = '\01';
	tb27 = '\01';
	tb28 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5008, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5009, dtype))(Current)).it_i4);
		tb28 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb28) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5010, dtype))(Current)).it_i4);
		tb27 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb27) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5011, dtype))(Current)).it_i4);
		tb26 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb26) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5012, dtype))(Current)).it_i4);
		tb25 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb25) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5013, dtype))(Current)).it_i4);
		tb24 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb24) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5014, dtype))(Current)).it_i4);
		tb23 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb23) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5015, dtype))(Current)).it_i4);
		tb22 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb22) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5016, dtype))(Current)).it_i4);
		tb21 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb21) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5017, dtype))(Current)).it_i4);
		tb20 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb20) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5018, dtype))(Current)).it_i4);
		tb19 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb19) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5019, dtype))(Current)).it_i4);
		tb18 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb18) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5020, dtype))(Current)).it_i4);
		tb17 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb17) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5021, dtype))(Current)).it_i4);
		tb16 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb16) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5022, dtype))(Current)).it_i4);
		tb15 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb15) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5023, dtype))(Current)).it_i4);
		tb14 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb14) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5024, dtype))(Current)).it_i4);
		tb13 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb13) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5025, dtype))(Current)).it_i4);
		tb12 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb12) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5026, dtype))(Current)).it_i4);
		tb11 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb11) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5027, dtype))(Current)).it_i4);
		tb10 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb10) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5028, dtype))(Current)).it_i4);
		tb9 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb9) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5029, dtype))(Current)).it_i4);
		tb8 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb8) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5030, dtype))(Current)).it_i4);
		tb7 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb7) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5031, dtype))(Current)).it_i4);
		tb6 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb6) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5032, dtype))(Current)).it_i4);
		tb5 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb5) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5033, dtype))(Current)).it_i4);
		tb4 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb4) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5034, dtype))(Current)).it_i4);
		tb3 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5035, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5036, dtype))(Current)).it_i4);
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

void EIF_Minit959 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
