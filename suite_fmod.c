#include "suite_math.h"

START_TEST(fmod_1) {
  ck_assert_ldouble_eq(s21_fmod(2.34, 2.0), fmod(2.34, 2.0));
}
END_TEST

START_TEST(fmod_2) {
  ck_assert_ldouble_eq(s21_fmod(-2.34, 2.0), fmod(-2.34, 2.0));
}
END_TEST

START_TEST(fmod_3) {
  ck_assert_ldouble_eq(s21_fmod(2.34, -2.0), fmod(2.34, -2.0));
}
END_TEST

START_TEST(fmod_4) {
  ck_assert_ldouble_eq(s21_fmod(-2.34, -2.0), fmod(-2.34, -2.0));
}
END_TEST

START_TEST(fmod_5) { ck_assert_ldouble_eq(s21_fmod(21.21, 3), fmod(21.21, 3)); }
END_TEST

START_TEST(fmod_6) { ck_assert_ldouble_eq(s21_fmod(3, 21.21), fmod(3, 21.21)); }
END_TEST

START_TEST(fmod_7) {
  ck_assert_ldouble_eq(s21_fmod(-21.21, 3), fmod(-21.21, 3));
}
END_TEST

START_TEST(fmod_8) {
  ck_assert_ldouble_eq(s21_fmod(3, -21.21), fmod(3, -21.21));
}
END_TEST

START_TEST(fmod_9) {
  ck_assert_ldouble_eq(s21_fmod(100500, 9), fmod(100500, 9));
}
END_TEST

START_TEST(fmod_10) {
  ck_assert_ldouble_eq(s21_fmod(-100500, -9), fmod(-100500, -9));
}
END_TEST

START_TEST(fmod_11) {
  ck_assert_ldouble_eq(s21_fmod(-9, -100500), fmod(-9, -100500));
}
END_TEST

START_TEST(fmod_12) { ck_assert_ldouble_eq(s21_fmod(-9, -9), fmod(-9, -9)); }
END_TEST

START_TEST(fmod_13) { ck_assert_ldouble_eq(s21_fmod(10, 5), fmod(10, 5)); }
END_TEST

START_TEST(fmod_14) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_ldouble_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(fmod_15) {
  ck_assert_ldouble_nan(s21_fmod(NAN, NAN));
  ck_assert_ldouble_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(fmod_16) {
  ck_assert_ldouble_nan(s21_fmod(2.45, 0));
  ck_assert_ldouble_nan(fmod(2.45, 0));
}
END_TEST

START_TEST(fmod_17) {
  ck_assert_ldouble_nan(s21_fmod(0, 0));
  ck_assert_ldouble_nan(fmod(0, 0));
}
END_TEST

START_TEST(fmod_18) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 0));
  ck_assert_ldouble_nan(fmod(INFINITY, 0));
}
END_TEST

START_TEST(fmod_19) {
  double num = NAN;
  long double orig_res = fmod(num, 2.0), our_res = s21_fmod(num, 2.0);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(fmod_20) {
  double num = NAN;
  long double orig_res = fmod(2.0, num), our_res = s21_fmod(2.0, num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(fmod_21) {
  ck_assert_ldouble_eq(s21_fmod(2.0, INFINITY), fmod(2.0, INFINITY));
}
END_TEST

START_TEST(fmod_22) {
  double num = INFINITY;
  long double orig_res = fmod(num, 2.0), our_res = s21_fmod(num, 2.0);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(fmod_23) {
  ck_assert_ldouble_eq(s21_fmod(2.0, INFINITY), fmod(2.0, INFINITY));
}
END_TEST

START_TEST(fmod_24) {
  ck_assert_ldouble_eq(s21_fmod(2.0, -INFINITY), fmod(2.0, -INFINITY));
}
END_TEST

START_TEST(fmod_25) {
  double num = -INFINITY;
  long double orig_res = fmod(num, 2.0), our_res = s21_fmod(num, 2.0);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(fmod_26) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_ldouble_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(fmod_27) { ck_assert_ldouble_eq(s21_fmod(0, 23), fmod(0, 23)); }
END_TEST

START_TEST(fmod_28) {
  ck_assert_ldouble_eq_tol(s21_fmod(2, 1e-8), fmod(2, 1e-8), S21_EPS);
}
END_TEST

Suite *suite_fmod(void) {
  Suite *s = suite_create("s21_fmod");
  TCase *tc = tcase_create("case_fmod");

  tcase_add_test(tc, fmod_1);
  tcase_add_test(tc, fmod_2);
  tcase_add_test(tc, fmod_3);
  tcase_add_test(tc, fmod_4);
  tcase_add_test(tc, fmod_5);
  tcase_add_test(tc, fmod_6);
  tcase_add_test(tc, fmod_7);
  tcase_add_test(tc, fmod_8);
  tcase_add_test(tc, fmod_9);
  tcase_add_test(tc, fmod_10);
  tcase_add_test(tc, fmod_11);
  tcase_add_test(tc, fmod_12);
  tcase_add_test(tc, fmod_13);
  tcase_add_test(tc, fmod_14);
  tcase_add_test(tc, fmod_15);
  tcase_add_test(tc, fmod_16);
  tcase_add_test(tc, fmod_17);
  tcase_add_test(tc, fmod_18);
  tcase_add_test(tc, fmod_19);
  tcase_add_test(tc, fmod_20);
  tcase_add_test(tc, fmod_21);
  tcase_add_test(tc, fmod_22);
  tcase_add_test(tc, fmod_23);
  tcase_add_test(tc, fmod_24);
  tcase_add_test(tc, fmod_25);
  tcase_add_test(tc, fmod_26);
  tcase_add_test(tc, fmod_27);
  tcase_add_test(tc, fmod_28);

  suite_add_tcase(s, tc);
  return s;
}
