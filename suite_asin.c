#include "suite_math.h"

START_TEST(asin_1) {
  double num = 0.55;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= S21_EPS)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_2) {
  double num = -0.99;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= S21_EPS)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_3) {
  double num = -9;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_4) {
  double num = INFINITY;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_5) {
  double num = -INFINITY;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_6) {
  double num = NAN;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_7) {
  ck_assert_ldouble_nan(s21_asin(INFINITY));
  ck_assert_ldouble_nan(asin(INFINITY));
}
END_TEST

START_TEST(asin_8) {
  ck_assert_ldouble_nan(s21_asin(-INFINITY));
  ck_assert_ldouble_nan(asin(-INFINITY));
}
END_TEST

START_TEST(asin_9) {
  ck_assert_ldouble_nan(s21_asin(NAN));
  ck_assert_ldouble_nan(asin(NAN));
}
END_TEST

START_TEST(asin_10) {
  ck_assert_ldouble_eq_tol(s21_asin(1.0), asin(1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_asin(-1.0), asin(-1.0), S21_EPS);
}
END_TEST

START_TEST(asin_11) {
  ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_asin(-0.0), asin(-0.0), S21_EPS);
}
END_TEST

START_TEST(asin_12) {
  ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), S21_EPS);
}
END_TEST

START_TEST(asin_13) {
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), S21_EPS);
}
END_TEST

START_TEST(asin_14) { ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), S21_EPS); }
END_TEST

START_TEST(asin_15) {
  ck_assert_ldouble_eq_tol(s21_asin(-sqrt(3) / 2), asin(-sqrt(3) / 2), S21_EPS);
}
END_TEST

START_TEST(asin_16) {
  ck_assert_ldouble_eq_tol(s21_asin(-sqrt(2) / 2), asin(-sqrt(2) / 2), S21_EPS);
}
END_TEST

START_TEST(asin_17) {
  ck_assert_ldouble_eq_tol(s21_asin(-1 / 2), asin(-1 / 2), S21_EPS);
}
END_TEST

START_TEST(asin_18) {
  ck_assert_ldouble_eq_tol(s21_asin(1 / 2), asin(1 / 2), S21_EPS);
}
END_TEST

START_TEST(asin_19) {
  ck_assert_ldouble_eq_tol(s21_asin(sqrt(2) / 2), asin(sqrt(2) / 2), S21_EPS);
}
END_TEST

START_TEST(asin_20) {
  ck_assert_ldouble_eq_tol(s21_asin(sqrt(3) / 2), asin(sqrt(3) / 2), S21_EPS);
}
END_TEST

Suite *suite_asin(void) {
  Suite *s = suite_create("s21_asin");
  TCase *tc = tcase_create("case_asin");

  tcase_add_test(tc, asin_1);
  tcase_add_test(tc, asin_2);
  tcase_add_test(tc, asin_3);
  tcase_add_test(tc, asin_4);
  tcase_add_test(tc, asin_5);
  tcase_add_test(tc, asin_6);
  tcase_add_test(tc, asin_7);
  tcase_add_test(tc, asin_8);
  tcase_add_test(tc, asin_9);
  tcase_add_test(tc, asin_10);
  tcase_add_test(tc, asin_11);
  tcase_add_test(tc, asin_12);
  tcase_add_test(tc, asin_13);
  tcase_add_test(tc, asin_14);
  tcase_add_test(tc, asin_15);
  tcase_add_test(tc, asin_16);
  tcase_add_test(tc, asin_17);
  tcase_add_test(tc, asin_18);
  tcase_add_test(tc, asin_19);
  tcase_add_test(tc, asin_20);

  suite_add_tcase(s, tc);
  return s;
}
