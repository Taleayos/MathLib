#include "suite_math.h"

START_TEST(sqrt_1) {
  double num = INFINITY;
  long double orig_res = sqrt(num), our_res = s21_sqrt(num);
  int suc = 0;
  if (isinf(orig_res) && isinf(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sqrt_2) {
  double num = -INFINITY;
  long double orig_res = sqrt(num), our_res = s21_sqrt(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sqrt_3) {
  double num = -15.01;
  ck_assert_ldouble_nan(s21_sqrt(num));
  ck_assert_ldouble_nan(sqrt(num));
}
END_TEST

START_TEST(sqrt_4) {
  double num = 0.9999;
  long double orig_res = sqrt(num), our_res = s21_sqrt(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sqrt_5) {
  double num = NAN;
  long double orig_res = sqrt(num), our_res = s21_sqrt(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sqrt_6) {
  ck_assert_ldouble_infinite(s21_sqrt(INFINITY));
  ck_assert_ldouble_infinite(sqrt(INFINITY));
}
END_TEST

START_TEST(sqrt_7) {
  ck_assert_ldouble_nan(s21_sqrt(NAN));
  ck_assert_ldouble_nan(sqrt(NAN));
}
END_TEST

START_TEST(sqrt_8) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1.0), sqrt(1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_sqrt(1.1), sqrt(1.1), S21_EPS);
}
END_TEST

START_TEST(sqrt_9) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.0), sqrt(0.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_sqrt(-0.0), sqrt(-0.0), S21_EPS);
}
END_TEST

START_TEST(sqrt_10) {
  ck_assert_ldouble_eq_tol(s21_sqrt(10e+16), sqrt(10e+16), S21_EPS);
}
END_TEST

START_TEST(sqrt_12) { ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), S21_EPS); }
END_TEST

START_TEST(sqrt_13) {
  ck_assert_ldouble_eq_tol(s21_sqrt(100), sqrt(100), S21_EPS);
}
END_TEST

START_TEST(sqrt_14) {
  ck_assert_ldouble_eq_tol(s21_sqrt(98765432.123), sqrt(98765432.123), S21_EPS);
}
END_TEST

START_TEST(sqrt_15) {
  ck_assert_ldouble_eq_tol(s21_sqrt(981.123e6), sqrt(981.123e6), S21_EPS);
}
END_TEST

START_TEST(sqrt_16) {
  ck_assert_ldouble_eq_tol(s21_sqrt(981.123e-15), sqrt(981.123e-15), S21_EPS);
}
END_TEST

Suite *suite_sqrt(void) {
  Suite *s = suite_create("s21_sqrt");
  TCase *tc = tcase_create("case_sqrt");

  tcase_add_test(tc, sqrt_1);
  tcase_add_test(tc, sqrt_2);
  tcase_add_test(tc, sqrt_3);
  tcase_add_test(tc, sqrt_4);
  tcase_add_test(tc, sqrt_5);
  tcase_add_test(tc, sqrt_6);
  tcase_add_test(tc, sqrt_7);
  tcase_add_test(tc, sqrt_8);
  tcase_add_test(tc, sqrt_9);
  tcase_add_test(tc, sqrt_10);
  tcase_add_test(tc, sqrt_12);
  tcase_add_test(tc, sqrt_13);
  tcase_add_test(tc, sqrt_14);
  tcase_add_test(tc, sqrt_15);
  tcase_add_test(tc, sqrt_16);

  suite_add_tcase(s, tc);
  return s;
}
