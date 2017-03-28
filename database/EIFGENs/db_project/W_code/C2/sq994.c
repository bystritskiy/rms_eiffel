/*
 * Code for class SQLITE_BINDING_HELPERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F994_7660(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F994_7661(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F994_7662(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F994_7663(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F994_7664(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F994_7665(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F994_7666(EIF_REFERENCE);
extern void EIF_Minit994(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_BINDING_HELPERS}.is_valid_argument */
EIF_TYPED_VALUE F994_7660 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_argument";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
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
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,tr1);
	RTLR(7,loc6);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 993, Current, 6, 1, 13776);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(993, Current, 13776);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(220, 0x00),loc2);
	loc3 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {1019,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = RTRV(typres0,loc3);
	}
	loc4 = RTCCL(arg1);
	loc4 = RTRV(eif_new_type(153, 0x00),loc4);
	if (!((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg1 != NULL) || EIF_TEST(loc2)) || EIF_TEST(loc3)) || EIF_TEST(loc4)))) {
		tb2 = '\0';
		loc5 = RTCCL(arg1);
		loc5 = RTRV(eif_new_type(227, 0x00),loc5);
		if (EIF_TEST(loc5)) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4374, "is_valid_as_string_8", loc5))(loc5)).it_b);
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN)(arg1 != NULL))) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		tb5 = '\01';
		tb6 = '\01';
		tb7 = '\01';
		tb8 = '\01';
		tb9 = '\01';
		tr1 = RTLNTY2(eif_new_type(208, 0x00), 0x00);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
		if (!(EIF_BOOLEAN)(loc1 == ti4_1)) {
			tr1 = RTLNTY2(eif_new_type(193, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb9 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb9) {
			tr1 = RTLNTY2(eif_new_type(202, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb8 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb8) {
			tr1 = RTLNTY2(eif_new_type(181, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb7 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb7) {
			tr1 = RTLNTY2(eif_new_type(178, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb6 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb6) {
			tr1 = RTLNTY2(eif_new_type(211, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb5 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb5) {
			tr1 = RTLNTY2(eif_new_type(190, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb4 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb4) {
			tr1 = RTLNTY2(eif_new_type(199, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb3 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb3) {
			tr1 = RTLNTY2(eif_new_type(205, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb2 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (!tb2) {
			tr1 = RTLNTY2(eif_new_type(196, 0x00), 0x00);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3564, "type_id", tr1))(tr1)).it_i4);
			tb1 = (EIF_BOOLEAN)(loc1 == ti4_1);
		}
		if (tb1) {
			if (RTAL & CK_CHECK) {
				RTHOOK(6);
				RTCT(NULL, EX_CHECK);
				if (Result) {
					RTCK;
				} else {
					RTCF;
				}
			}
		} else {
			RTHOOK(7);
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(213, 0x00),loc6);
			if (EIF_TEST(loc6)) {
				RTHOOK(8);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3905, 190))(Current)).it_i8);
				tu8_1 = (EIF_NATURAL_64) ti8_1;
				ur1 = RTLN(eif_new_type(214, 0x00).id);
				*(EIF_NATURAL_64 *)ur1 = tu8_1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1344, "is_less_equal", loc6))(loc6, ur1x)).it_b);
				Result = (EIF_BOOLEAN) tb1;
			} else {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {SQLITE_BINDING_HELPERS}.is_valid_arguments */
EIF_TYPED_VALUE F994_7661 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_arguments";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 993, Current, 4, 1, 13777);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(993, Current, 13777);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {263,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 993, l_feature_name, 1, typres0, 0x00);
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
		RTDBGAL(Current, 1, 0xF8000108, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(4);
			tb1 = (EIF_BOOLEAN) 1;
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc3))(loc3);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5465, dtype))(Current)).it_i4);
	RTHOOK(7);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTDBGAL(Current, 2, 0xF8000108, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc4))(loc4)).it_b);
		if (tb1) break;
		RTHOOK(9);
		if ((EIF_BOOLEAN) !Result) break;
		RTHOOK(10);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(11);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tb2 = '\0';
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5459, dtype))(Current, ur1x)).it_b);
			tb2 = tb3;
		}
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc4))(loc4);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("a_args_small_enough", EX_POST);
		tb2 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5462, dtype))(Current, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {SQLITE_BINDING_HELPERS}.is_valid_variable_name */
EIF_TYPED_VALUE F994_7662 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_variable_name";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 993, Current, 5, 1, 13778);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(993, Current, 13778);
	if (arg1) {
		RTCC(arg1, 993, l_feature_name, 1, eif_new_type(220, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_var_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_a_var_is_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4375, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2414, "item", arg1))(arg1, ui4_1x)).it_c1);
	loc1 = (EIF_CHARACTER_8) tc1;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\?')) {
		RTHOOK(5);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4483, "count", arg1));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 1L));
		RTHOOK(7);
		if ((EIF_BOOLEAN) !Result) {
			RTHOOK(8);
			RTDBGAL(Current, 5, 0xF80000DC, 0, 0); /* loc5 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ui4_2 = loc3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4438, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4390, "is_integer_32", loc5))(loc5)).it_b);
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4424, "to_integer_32", loc5))(loc5)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(11);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				tb1 = '\0';
				if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5465, dtype))(Current)).it_i4);
					tb1 = (EIF_BOOLEAN) (loc4 <= ti4_1);
				}
				Result = (EIF_BOOLEAN) tb1;
			}
		}
	} else {
		RTHOOK(12);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) ':') || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '@')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '$'))) {
			RTHOOK(13);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4483, "count", arg1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 1L));
			RTHOOK(15);
			if (Result) {
				RTHOOK(16);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				for (;;) {
					RTHOOK(17);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 > loc3) || (EIF_BOOLEAN) !Result)) break;
					RTHOOK(18);
					RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
					ui4_1 = loc4;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2414, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(19);
					RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
					tb1 = '\0';
					tr1 = RTLN(eif_new_type(187, 0x00).id);
					*(EIF_CHARACTER_8 *)tr1 = loc2;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3888, "is_printable", tr1))(tr1)).it_b);
					if (tb2) {
						tb2 = EIF_TEST(isspace(loc2));
						tb1 = (EIF_BOOLEAN) !tb2;
					}
					Result = (EIF_BOOLEAN) tb1;
					RTHOOK(20);
					RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
					loc4++;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SQLITE_BINDING_HELPERS}.is_over_sqlite_limit_variable_number */
EIF_TYPED_VALUE F994_7663 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_over_sqlite_limit_variable_number";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 993, Current, 3, 1, 13779);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(993, Current, 13779);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {263,0xFF04,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 993, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5465, Dtype(Current)))(Current)).it_i4);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc3))(loc3)).it_b);
		if (tb1) break;
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc3))(loc3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

/* {SQLITE_BINDING_HELPERS}.iterable_min_count_or_value */
EIF_TYPED_VALUE F994_7664 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "iterable_min_count_or_value";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 993, Current, 2, 2, 13780);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(993, Current, 13780);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {263,0xFF04,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			RTCC(arg1, 993, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {258,0xFF04,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", loc1))(loc1)).it_i4);
		RTNHOOK(2,1);
		ui4_1 = arg2;
		ti4_2 = eif_min_int32 (ti4_1,ui4_1);
		Result = (EIF_INTEGER_32) ti4_2;
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF8000108, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc2))(loc2)).it_b);
			if (tb1) break;
			RTHOOK(4);
			if ((EIF_BOOLEAN) (Result >= arg2)) break;
			RTHOOK(5);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result++;
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc2))(loc2);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {SQLITE_BINDING_HELPERS}.iterable_has_count */
EIF_TYPED_VALUE F994_7665 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "iterable_has_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 993, Current, 3, 2, 13781);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(993, Current, 13781);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {263,0xFF04,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			RTCC(arg1, 993, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {258,0xFF04,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", loc2))(loc2)).it_i4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg2);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF8000108, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc3))(loc3)).it_b);
			if (tb1) break;
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > arg2)) break;
			RTHOOK(5);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc3))(loc3);
		}
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == arg2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg2
#undef arg1
}

/* {SQLITE_BINDING_HELPERS}.maximum_variable_index_number */
EIF_TYPED_VALUE F994_7666 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_variable_index_number";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 993, Current, 0, 0, 13782);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(993, Current, 13782);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5374, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5688, "maximum_variable_index_number", tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

void EIF_Minit994 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
