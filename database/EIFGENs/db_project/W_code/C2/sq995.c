/*
 * Code for class SQLITE_BIND_ARG_MARSHALLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F995_7667(EIF_REFERENCE);
extern EIF_TYPED_VALUE F995_7668(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F995_7669(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F995_7670(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit995(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_BIND_ARG_MARSHALLER}.default_bind_arg */
RTOID (F995_7667)
EIF_TYPED_VALUE F995_7667 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_bind_arg";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F995_7667);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 994, Current, 0, 0, 13783);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(994, Current, 13783);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1014, 0x00).id);
	tr2 = RTMS_EX_H("\?1",2,16177);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5699, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {SQLITE_BIND_ARG_MARSHALLER}.is_value_marshalled */
EIF_TYPED_VALUE F995_7668 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_value_marshalled";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 994, Current, 2, 1, 13784);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(994, Current, 13784);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_value_is_valid_value_type", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5459, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	loc1 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {1019,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("a_value_is_bind_arg", EX_POST);
		loc2 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {1019,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc2 = RTRV(typres0,loc2);
		}
		if ((!(Result) || (EIF_TEST(loc2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {SQLITE_BIND_ARG_MARSHALLER}.new_binding_argument_array */
EIF_TYPED_VALUE F995_7669 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_binding_argument_array";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLR(7,loc6);
	RTLR(8,loc3);
	RTLR(9,loc7);
	RTLR(10,loc4);
	RTLR(11,ur2);
	RTLIU(12);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 994, Current, 7, 1, 13785);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(994, Current, 13785);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {263,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			RTCC(arg1, 994, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_args_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_a_args_is_empty", EX_PRE);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF8000108, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc5))(loc5)).it_b);
			if (tb2) break;
			RTHOOK(4);
			tb1 = (EIF_BOOLEAN) 1;
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc5))(loc5);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("a_args_is_valid_arguments", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5460, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5465, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5463, dtype))(Current, ur1x, ui4_1x)).it_i4);
	RTHOOK(8);
	RTDBGAL(Current, 0, 0xF8000127, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {295,1019,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5466, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2631, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(8,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	RTDBGAL(Current, 2, 0xF8000108, 0, 0); /* loc6 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc6))(loc6)).it_b);
		if (tb1) break;
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc2 > loc1)) break;
		RTHOOK(12);
		RTDBGAL(Current, 3, 0xF8000000, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		loc7 = RTCCL(loc3);
		{
			static EIF_TYPE_INDEX typarr0[] = {1019,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc7 = RTRV(typres0,loc7);
		}
		if (EIF_TEST(loc7)) {
			RTHOOK(14);
			ur1 = RTCCL(loc7);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
		} else {
			RTHOOK(15);
			RTDBGAL(Current, 4, 0xF80000DE, 0, 0); /* loc4 */
			tr1 = RTLN(eif_new_type(222, 0x00).id);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4358, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(15,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			uc1 = (EIF_CHARACTER_8) '\?';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4534, "append_character", loc4))(loc4, uc1x);
			RTHOOK(17);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4524, "append_integer", loc4))(loc4, ui4_1x);
			RTHOOK(18);
			ur1 = RTCCL(loc3);
			ur2 = RTCCL(loc4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5469, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
		}
		RTHOOK(19);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc6))(loc6);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("result_count_matches", EX_POST);
		ur1 = RTCCL(arg1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", Result))(Result)).it_i4);
		ui4_1 = ti4_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5464, dtype))(Current, ur1x, ui4_1x)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {SQLITE_BIND_ARG_MARSHALLER}.new_binding_argument */
EIF_TYPED_VALUE F995_7670 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_binding_argument";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(24);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,Result);
	RTLR(6,loc4);
	RTLR(7,tr1);
	RTLR(8,ur2);
	RTLR(9,loc5);
	RTLR(10,tr2);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,loc1);
	RTLR(14,loc8);
	RTLR(15,loc9);
	RTLR(16,loc10);
	RTLR(17,loc11);
	RTLR(18,loc12);
	RTLR(19,loc13);
	RTLR(20,loc14);
	RTLR(21,loc15);
	RTLR(22,loc16);
	RTLR(23,loc17);
	RTLIU(24);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	
	RTEAA(l_feature_name, 994, Current, 17, 2, 13786);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(994, Current, 13786);
	if (arg2) {
		RTCC(arg2, 994, l_feature_name, 2, eif_new_type(220, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_value_is_valid_argument", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5459, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_var_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_a_var_is_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4375, "is_empty", arg2))(arg2)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_var_is_valid_variable_name", EX_PRE);
		ur1 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5461, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(6);
		loc3 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {1019,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc3 = RTRV(typres0,loc3);
		}
		if (EIF_TEST(loc3)) {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc3);
		} else {
			RTHOOK(8);
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_new_type(220, 0x00),loc4);
			if (EIF_TEST(loc4)) {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(1013, 0x00).id);
				ur1 = RTCCL(arg2);
				ur2 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ur2x);
				RTNHOOK(9,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(10);
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_new_type(227, 0x00),loc5);
				if (EIF_TEST(loc5)) {
					RTHOOK(11);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4374, "is_valid_as_string_8", loc5))(loc5)).it_b);
					if (tb1) {
						RTHOOK(12);
						RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(1013, 0x00).id);
						ur1 = RTCCL(arg2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4414, "as_string_8", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur2 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ur2x);
						RTNHOOK(12,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						if (RTAL & CK_CHECK) {
							RTHOOK(13);
							RTCT("unsupported_value_for_type_string_32", EX_CHECK);
								RTCF;
						}
						RTHOOK(14);
						RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(1014, 0x00).id);
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5699, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(14,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
					}
				} else {
					RTHOOK(15);
					loc6 = RTCCL(arg1);
					loc6 = RTRV(eif_new_type(153, 0x00),loc6);
					if (EIF_TEST(loc6)) {
						RTHOOK(16);
						RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(1012, 0x00).id);
						ur1 = RTCCL(arg2);
						ur2 = RTCCL(loc6);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ur2x);
						RTNHOOK(16,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(17);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(17,1);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(18);
						tr1 = RTLNTY2(eif_new_type(178, 0x00), 0x00);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
						if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
							RTHOOK(19);
							loc7 = RTCCL(arg1);
							loc7 = RTRV(eif_new_type(177, 0x00),loc7);
							if (EIF_TEST(loc7)) {
								RTHOOK(20);
								RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
								tr1 = RTLN(eif_new_type(1011, 0x00).id);
								ur1 = RTCCL(arg2);
								ti1_1 = *(EIF_INTEGER_8 *)(loc7 + RTVA(3749, "item", loc7));
								ti8_1 = (EIF_INTEGER_64) ti1_1;
								ui8_1 = ti8_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
								RTNHOOK(20,1);
								loc1 = (EIF_REFERENCE) RTCCL(tr1);
							}
						} else {
							RTHOOK(21);
							tr1 = RTLNTY2(eif_new_type(211, 0x00), 0x00);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
							if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
								RTHOOK(22);
								loc8 = RTCCL(arg1);
								loc8 = RTRV(eif_new_type(210, 0x00),loc8);
								if (EIF_TEST(loc8)) {
									RTHOOK(23);
									RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
									tr1 = RTLN(eif_new_type(1011, 0x00).id);
									ur1 = RTCCL(arg2);
									ti2_1 = *(EIF_INTEGER_16 *)(loc8 + RTVA(4189, "item", loc8));
									ti8_1 = (EIF_INTEGER_64) ti2_1;
									ui8_1 = ti8_1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
									RTNHOOK(23,1);
									loc1 = (EIF_REFERENCE) RTCCL(tr1);
								}
							} else {
								RTHOOK(24);
								tr1 = RTLNTY2(eif_new_type(208, 0x00), 0x00);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
								if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
									RTHOOK(25);
									loc9 = RTCCL(arg1);
									loc9 = RTRV(eif_new_type(207, 0x00),loc9);
									if (EIF_TEST(loc9)) {
										RTHOOK(26);
										RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
										tr1 = RTLN(eif_new_type(1011, 0x00).id);
										ur1 = RTCCL(arg2);
										ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(4137, "item", loc9));
										ti8_1 = (EIF_INTEGER_64) ti4_1;
										ui8_1 = ti8_1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
										RTNHOOK(26,1);
										loc1 = (EIF_REFERENCE) RTCCL(tr1);
									}
								} else {
									RTHOOK(27);
									tr1 = RTLNTY2(eif_new_type(190, 0x00), 0x00);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
									if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
										RTHOOK(28);
										loc10 = RTCCL(arg1);
										loc10 = RTRV(eif_new_type(189, 0x00),loc10);
										if (EIF_TEST(loc10)) {
											RTHOOK(29);
											RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
											tr1 = RTLN(eif_new_type(1011, 0x00).id);
											ur1 = RTCCL(arg2);
											ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(3901, "item", loc10));
											ui8_1 = ti8_1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
											RTNHOOK(29,1);
											loc1 = (EIF_REFERENCE) RTCCL(tr1);
										}
									} else {
										RTHOOK(30);
										tr1 = RTLNTY2(eif_new_type(199, 0x00), 0x00);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
										if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
											RTHOOK(31);
											loc11 = RTCCL(arg1);
											loc11 = RTRV(eif_new_type(198, 0x00),loc11);
											if (EIF_TEST(loc11)) {
												RTHOOK(32);
												RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
												tr1 = RTLN(eif_new_type(1011, 0x00).id);
												ur1 = RTCCL(arg2);
												tu1_1 = *(EIF_NATURAL_8 *)(loc11 + RTVA(3991, "item", loc11));
												RTNHOOK(32,1);
												ti4_1 = (EIF_INTEGER_32) tu1_1;
												ti8_1 = (EIF_INTEGER_64) ti4_1;
												ui8_1 = ti8_1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
												RTNHOOK(32,2);
												loc1 = (EIF_REFERENCE) RTCCL(tr1);
											}
										} else {
											RTHOOK(33);
											tr1 = RTLNTY2(eif_new_type(205, 0x00), 0x00);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
											if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
												RTHOOK(34);
												loc12 = RTCCL(arg1);
												loc12 = RTRV(eif_new_type(204, 0x00),loc12);
												if (EIF_TEST(loc12)) {
													RTHOOK(35);
													RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
													tr1 = RTLN(eif_new_type(1011, 0x00).id);
													ur1 = RTCCL(arg2);
													tu2_1 = *(EIF_NATURAL_16 *)(loc12 + RTVA(4088, "item", loc12));
													RTNHOOK(35,1);
													ti4_1 = (EIF_INTEGER_32) tu2_1;
													ti8_1 = (EIF_INTEGER_64) ti4_1;
													ui8_1 = ti8_1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
													RTNHOOK(35,2);
													loc1 = (EIF_REFERENCE) RTCCL(tr1);
												}
											} else {
												RTHOOK(36);
												tr1 = RTLNTY2(eif_new_type(202, 0x00), 0x00);
												ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
												if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
													RTHOOK(37);
													loc13 = RTCCL(arg1);
													loc13 = RTRV(eif_new_type(201, 0x00),loc13);
													if (EIF_TEST(loc13)) {
														RTHOOK(38);
														ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, 208))(Current)).it_i4);
														tu4_1 = (EIF_NATURAL_32) ti4_1;
														ur1 = RTLN(eif_new_type(202, 0x00).id);
														*(EIF_NATURAL_32 *)ur1 = tu4_1;
														tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1344, "is_less_equal", loc13))(loc13, ur1x)).it_b);
														if (tb1) {
															RTHOOK(39);
															RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
															tr1 = RTLN(eif_new_type(1011, 0x00).id);
															ur1 = RTCCL(arg2);
															tu4_1 = *(EIF_NATURAL_32 *)(loc13 + RTVA(4040, "item", loc13));
															RTNHOOK(39,1);
															ti4_1 = (EIF_INTEGER_32) tu4_1;
															ti8_1 = (EIF_INTEGER_64) ti4_1;
															ui8_1 = ti8_1;
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
															RTNHOOK(39,2);
															loc1 = (EIF_REFERENCE) RTCCL(tr1);
														} else {
															RTHOOK(40);
															RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
															tr1 = RTLN(eif_new_type(1011, 0x00).id);
															ur1 = RTCCL(arg2);
															tu4_1 = *(EIF_NATURAL_32 *)(loc13 + RTVA(4040, "item", loc13));
															RTNHOOK(40,1);
															ti8_1 = (EIF_INTEGER_64) tu4_1;
															ui8_1 = ti8_1;
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
															RTNHOOK(40,2);
															loc1 = (EIF_REFERENCE) RTCCL(tr1);
														}
													}
												} else {
													RTHOOK(41);
													tr1 = RTLNTY2(eif_new_type(214, 0x00), 0x00);
													ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
													if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
														RTHOOK(42);
														loc14 = RTCCL(arg1);
														loc14 = RTRV(eif_new_type(213, 0x00),loc14);
														if (EIF_TEST(loc14)) {
															RTHOOK(43);
															ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, 208))(Current)).it_i4);
															tu8_1 = (EIF_NATURAL_64) ti4_1;
															ur1 = RTLN(eif_new_type(214, 0x00).id);
															*(EIF_NATURAL_64 *)ur1 = tu8_1;
															tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1344, "is_less_equal", loc14))(loc14, ur1x)).it_b);
															if (tb1) {
																RTHOOK(44);
																RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
																tr1 = RTLN(eif_new_type(1011, 0x00).id);
																ur1 = RTCCL(arg2);
																tu8_1 = *(EIF_NATURAL_64 *)(loc14 + RTVA(4241, "item", loc14));
																RTNHOOK(44,1);
																ti4_1 = (EIF_INTEGER_32) tu8_1;
																ti8_1 = (EIF_INTEGER_64) ti4_1;
																ui8_1 = ti8_1;
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
																RTNHOOK(44,2);
																loc1 = (EIF_REFERENCE) RTCCL(tr1);
															} else {
																RTHOOK(45);
																ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3905, 190))(Current)).it_i8);
																tu8_1 = (EIF_NATURAL_64) ti8_1;
																ur1 = RTLN(eif_new_type(214, 0x00).id);
																*(EIF_NATURAL_64 *)ur1 = tu8_1;
																tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1344, "is_less_equal", loc14))(loc14, ur1x)).it_b);
																if (tb1) {
																	RTHOOK(46);
																	RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
																	tr1 = RTLN(eif_new_type(1011, 0x00).id);
																	ur1 = RTCCL(arg2);
																	tu8_1 = *(EIF_NATURAL_64 *)(loc14 + RTVA(4241, "item", loc14));
																	RTNHOOK(46,1);
																	ti8_1 = (EIF_INTEGER_64) tu8_1;
																	ui8_1 = ti8_1;
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
																	RTNHOOK(46,2);
																	loc1 = (EIF_REFERENCE) RTCCL(tr1);
																} else {
																	if (RTAL & CK_CHECK) {
																		RTHOOK(47);
																		RTCT("unsupported_value_for_type_natural_64", EX_CHECK);
																			RTCF;
																	}
																	RTHOOK(48);
																	RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
																	tr1 = RTLN(eif_new_type(1011, 0x00).id);
																	ur1 = RTCCL(arg2);
																	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ui8_1x);
																	RTNHOOK(48,1);
																	Result = (EIF_REFERENCE) RTCCL(tr1);
																}
															}
														}
													} else {
														RTHOOK(49);
														tr1 = RTLNTY2(eif_new_type(181, 0x00), 0x00);
														ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
														if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
															RTHOOK(50);
															loc15 = RTCCL(arg1);
															loc15 = RTRV(eif_new_type(180, 0x00),loc15);
															if (EIF_TEST(loc15)) {
																RTHOOK(51);
																RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
																tr1 = RTLN(eif_new_type(1010, 0x00).id);
																ur1 = RTCCL(arg2);
																tr4_1 = *(EIF_REAL_32 *)(loc15 + RTVA(3801, "item", loc15));
																tr8_1 = (EIF_REAL_64) (tr4_1);
																ur8_1 = tr8_1;
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ur8_1x);
																RTNHOOK(51,1);
																loc1 = (EIF_REFERENCE) RTCCL(tr1);
															}
														} else {
															RTHOOK(52);
															tr1 = RTLNTY2(eif_new_type(196, 0x00), 0x00);
															ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
															if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
																RTHOOK(53);
																loc16 = RTCCL(arg1);
																loc16 = RTRV(eif_new_type(195, 0x00),loc16);
																if (EIF_TEST(loc16)) {
																	RTHOOK(54);
																	RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
																	tr1 = RTLN(eif_new_type(1010, 0x00).id);
																	ur1 = RTCCL(arg2);
																	tr8_1 = *(EIF_REAL_64 *)(loc16 + RTVA(3964, "item", loc16));
																	ur8_1 = tr8_1;
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ur8_1x);
																	RTNHOOK(54,1);
																	loc1 = (EIF_REFERENCE) RTCCL(tr1);
																}
															} else {
																RTHOOK(55);
																tr1 = RTLNTY2(eif_new_type(193, 0x00), 0x00);
																ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
																if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
																	RTHOOK(56);
																	loc17 = RTCCL(arg1);
																	loc17 = RTRV(eif_new_type(192, 0x00),loc17);
																	if (EIF_TEST(loc17)) {
																		RTHOOK(57);
																		RTDBGAL(Current, 1, 0xF80003FB, 0, 0); /* loc1 */
																		tr1 = RTLN(eif_new_type(1015, 0x00).id);
																		ur1 = RTCCL(arg2);
																		tb1 = *(EIF_BOOLEAN *)(loc17 + RTVA(3952, "item", loc17));
																		ub1 = tb1;
																		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5691, Dtype(tr1)))(tr1, ur1x, ub1x);
																		RTNHOOK(57,1);
																		loc1 = (EIF_REFERENCE) RTCCL(tr1);
																	}
																} else {
																	if (RTAL & CK_CHECK) {
																		RTHOOK(58);
																		RTCT("unsupported_type", EX_CHECK);
																			RTCF;
																	}
																	RTHOOK(59);
																	RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
																	tr1 = RTLN(eif_new_type(1014, 0x00).id);
																	ur1 = RTCCL(arg2);
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5699, Dtype(tr1)))(tr1, ur1x);
																	RTNHOOK(59,1);
																	Result = (EIF_REFERENCE) RTCCL(tr1);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						RTHOOK(60);
						RTCT0("l_scalar_result_attached", EX_CHECK);
						if ((EIF_BOOLEAN)(loc1 != NULL)) {
							RTCK0;
						} else {
							RTCF0;
						}
						RTHOOK(61);
						RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
						Result = (EIF_REFERENCE) RTCCL(loc1);
					}
				}
			}
		}
	} else {
		RTHOOK(62);
		RTDBGAL(Current, 0, 0xF80003FB, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1014, 0x00).id);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5699, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(62,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(63);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(64);
		RTCT("result_is_value_marshalled", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5467, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(65);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui8_1
#undef ub1
#undef arg2
#undef arg1
}

void EIF_Minit995 (void)
{
	GTCX
	RTOTS (7667,F995_7667)
}


#ifdef __cplusplus
}
#endif
