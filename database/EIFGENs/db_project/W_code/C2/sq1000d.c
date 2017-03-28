/*
 * Class SQLITE_INSERT_STATEMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1000 [] = {0xFF01,222,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1000 [] = {0xFF01,239,999,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1000 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1000 [] = {0xFF01,222,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1000 [] = {0xFF01,222,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1000 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1000 [] = {1019,0,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1000 [] = {295,1019,0,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1000 [] = {1019,0,0xFFFF};


static const struct desc_info desc_1000[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1000), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1000), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1000), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1000), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1000), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1000), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1000), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1000), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1000), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1000), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1000), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1000), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07CF /*999*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1000), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13802, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 6469, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13447, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07A1 /*976*/), 13448, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13449, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07E3 /*1009*/), 13689, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13690, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13691, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13776, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13777, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13778, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13779, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13780, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13781, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13782, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13450, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13451, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13452, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13453, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13454, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017D /*190*/), 13455, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13456, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13457, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13458, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13459, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13460, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13461, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13462, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13463, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13464, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13465, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13466, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13467, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13468, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13469, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13470, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13471, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13472, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13473, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13474, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13475, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13476, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13477, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13478, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13479, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13480, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13481, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13482, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13483, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13484, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13485, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13486, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13487, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13488, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13489, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13490, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13491, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1000), 13783, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13784, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_1000), 13785, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_1000), 13786, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13800, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13801, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01CD /*230*/), 13803, 0},
	{EIF_NON_GENERIC(0x07BF /*991*/), 13804, 8},
	{EIF_NON_GENERIC(0x01CD /*230*/), 13805, 16},
	{EIF_NON_GENERIC(0x07C9 /*996*/), 13806, 24},
	{EIF_NON_GENERIC(0x07A1 /*976*/), 13807, 32},
	{EIF_NON_GENERIC(0x07C7 /*995*/), 13808, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07C7 /*995*/), 13809, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B9 /*220*/), 13810, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 13811, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 13812, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 13813, 44},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13814, 40},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13815, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13816, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13817, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13818, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13819, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13820, 41},
	{EIF_GENERIC(NULL), 13821, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13822, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13823, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13824, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13825, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13826, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13827, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13845, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13846, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13830, 56},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13831, 64},
	{EIF_NON_GENERIC(0x0195 /*202*/), 13832, 48},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13833, 52},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13834, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13842, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13843, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017D /*190*/), 13844, 72},
};
void Init1000(void)
{
	IDSC(desc_1000, 0, 999);
	IDSC(desc_1000 + 1, 1, 999);
	IDSC(desc_1000 + 32, 209, 999);
	IDSC(desc_1000 + 34, 384, 999);
	IDSC(desc_1000 + 37, 360, 999);
	IDSC(desc_1000 + 40, 382, 999);
	IDSC(desc_1000 + 47, 367, 999);
	IDSC(desc_1000 + 77, 363, 999);
	IDSC(desc_1000 + 89, 368, 999);
	IDSC(desc_1000 + 93, 359, 999);
	IDSC(desc_1000 + 127, 355, 999);
	IDSC(desc_1000 + 129, 357, 999);
}


#ifdef __cplusplus
}
#endif
