#include "suite_math.h"

START_TEST(acos_1) {
  double num = 0.55;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= S21_EPS)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(acos_2) {
  double num = -0.99;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= S21_EPS)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(acos_3) {
  double num = -9;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(acos_4) {
  double num = INFINITY;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(acos_5) {
  double num = -INFINITY;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(acos_6) {
  double num = NAN;
  long double orig_res = s21_acos(num), our_res = acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(acos_7) {
  ck_assert_ldouble_nan(s21_acos(S21_NAN));
  ck_assert_ldouble_nan(acos(S21_NAN));
}
END_TEST

START_TEST(acos_8) {
  ck_assert_ldouble_nan(s21_acos(S21_NAN));
  ck_assert_ldouble_nan(acos(S21_NAN));
}
END_TEST

START_TEST(acos_9) {
  ck_assert_ldouble_eq_tol(s21_acos(1.0), acos(1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_acos(-1.0), acos(-1.0), S21_EPS);
}
END_TEST

START_TEST(acos_10) {
  ck_assert_ldouble_eq_tol(s21_acos(0.0), acos(0.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_acos(-0.0), acos(-0.0), S21_EPS);
}
END_TEST

START_TEST(acos_11) {
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), S21_EPS);
}
END_TEST

START_TEST(acos_12) { ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), S21_EPS); }
END_TEST

START_TEST(acos_13) {
  ck_assert_ldouble_eq_tol(s21_acos(-sqrt(3) / 2), acos(-sqrt(3) / 2), S21_EPS);
}
END_TEST

START_TEST(acos_14) {
  ck_assert_ldouble_eq_tol(s21_acos(-sqrt(2) / 2), acos(-sqrt(2) / 2), S21_EPS);
}
END_TEST

START_TEST(acos_15) {
  ck_assert_ldouble_eq_tol(s21_acos(-1 / 2), acos(-1 / 2), S21_EPS);
}
END_TEST

START_TEST(acos_16) {
  ck_assert_ldouble_eq_tol(s21_acos(1 / 2), acos(1 / 2), S21_EPS);
}
END_TEST

START_TEST(acos_17) {
  ck_assert_ldouble_eq_tol(s21_acos(2 / 2), acos(2 / 2), S21_EPS);
}
END_TEST

START_TEST(acos_18) {
  ck_assert_ldouble_eq_tol(s21_acos(sqrt(2) / 2), acos(sqrt(2) / 2), S21_EPS);
}
END_TEST

START_TEST(acos_19) {
  ck_assert_ldouble_eq_tol(s21_acos(sqrt(3) / 2), acos(sqrt(3) / 2), S21_EPS);
}
END_TEST

Suite *suite_acos(void) {
  Suite *s = suite_create("s21_acos");
  TCase *tc = tcase_create("case_acos");

  tcase_add_test(tc, acos_1);
  tcase_add_test(tc, acos_2);
  tcase_add_test(tc, acos_3);
  tcase_add_test(tc, acos_4);
  tcase_add_test(tc, acos_5);
  tcase_add_test(tc, acos_6);
  tcase_add_test(tc, acos_7);
  tcase_add_test(tc, acos_8);
  tcase_add_test(tc, acos_9);
  tcase_add_test(tc, acos_10);
  tcase_add_test(tc, acos_11);
  tcase_add_test(tc, acos_12);
  tcase_add_test(tc, acos_13);
  tcase_add_test(tc, acos_14);
  tcase_add_test(tc, acos_15);
  tcase_add_test(tc, acos_16);
  tcase_add_test(tc, acos_17);
  tcase_add_test(tc, acos_18);
  tcase_add_test(tc, acos_19);

  suite_add_tcase(s, tc);
  return s;
}
