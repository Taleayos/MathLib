#include "suite_math.h"

START_TEST(exp_1) { ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), S21_EPS); }
END_TEST

START_TEST(exp_2) { ck_assert_ldouble_eq_tol(s21_exp(-0), exp(-0), S21_EPS); }
END_TEST

START_TEST(exp_3) { ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), S21_EPS); }
END_TEST

START_TEST(exp_4) { ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), S21_EPS); }
END_TEST

START_TEST(exp_5) { ck_assert_ldouble_eq_tol(s21_exp(2), exp(2), S21_EPS); }
END_TEST

START_TEST(exp_6) { ck_assert_ldouble_eq_tol(s21_exp(-2), exp(-2), S21_EPS); }
END_TEST

START_TEST(exp_7) { ck_assert_ldouble_eq_tol(s21_exp(3), exp(3), S21_EPS); }
END_TEST

START_TEST(exp_8) { ck_assert_ldouble_eq_tol(s21_exp(-3), exp(-3), S21_EPS); }
END_TEST

START_TEST(exp_9) { ck_assert_ldouble_eq_tol(s21_exp(0.0), exp(0.0), S21_EPS); }
END_TEST

START_TEST(exp_10) {
  ck_assert_ldouble_eq_tol(s21_exp(-0.0), exp(-0.0), S21_EPS);
}
END_TEST

START_TEST(exp_11) {
  ck_assert_ldouble_eq_tol(s21_exp(1.0), exp(1.0), S21_EPS);
}
END_TEST

START_TEST(exp_12) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.0), exp(-1.0), S21_EPS);
}
END_TEST

START_TEST(exp_13) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.0), exp(-1.0), S21_EPS);
}
END_TEST

START_TEST(exp_14) {
  ck_assert_ldouble_eq_tol(s21_exp(1.5), exp(1.5), S21_EPS);
}
END_TEST

START_TEST(exp_15) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.5), exp(-1.5), S21_EPS);
}
END_TEST

START_TEST(exp_16) {
  ck_assert_ldouble_eq_tol(s21_exp(0.5), exp(0.5), S21_EPS);
}
END_TEST

START_TEST(exp_17) {
  ck_assert_ldouble_eq_tol(s21_exp(-0.5), exp(-0.5), S21_EPS);
}
END_TEST

START_TEST(exp_18) {
  ck_assert_ldouble_eq_tol(s21_exp(0.0 / 1), exp(0.0 / 1), S21_EPS);
}
END_TEST

START_TEST(exp_19) {
  ck_assert_ldouble_eq_tol(s21_exp(-0.0 / 1), exp(-0.0 / 1), S21_EPS);
}
END_TEST

START_TEST(exp_20) {
  ck_assert_ldouble_eq_tol(s21_exp(-715), exp(-715), S21_EPS);
}
END_TEST

START_TEST(exp_21) {
  ck_assert_ldouble_eq_tol(s21_exp(-1000000), exp(-1000000), S21_EPS);
}
END_TEST

START_TEST(exp_22) {
  double num = 715;
  long double orig_res = exp(num), our_res = s21_exp(num);
  int suc = 0;
  if (isinf(orig_res) && isinf(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(exp_23) {
  double num = 1000000;
  long double orig_res = exp(num), our_res = s21_exp(num);
  int suc = 0;
  if (isinf(orig_res) && isinf(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(exp_24) {
  ck_assert_ldouble_infinite(s21_exp(INFINITY));
  ck_assert_ldouble_infinite(exp(INFINITY));
}
END_TEST

START_TEST(exp_25) {
  ck_assert_ldouble_eq_tol(s21_exp(-INFINITY), expl(-INFINITY), S21_EPS);
}
END_TEST

START_TEST(exp_26) {
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_ldouble_nan(exp(NAN));
}
END_TEST

START_TEST(exp_27) {
  ck_assert_ldouble_nan(s21_exp(-NAN));
  ck_assert_ldouble_nan(exp(-NAN));
}
END_TEST

Suite *suite_exp(void) {
  Suite *s = suite_create("s21_exp");
  TCase *tc = tcase_create("s21_exp");

  tcase_add_test(tc, exp_1);
  tcase_add_test(tc, exp_2);
  tcase_add_test(tc, exp_3);
  tcase_add_test(tc, exp_4);
  tcase_add_test(tc, exp_5);
  tcase_add_test(tc, exp_6);
  tcase_add_test(tc, exp_7);
  tcase_add_test(tc, exp_8);
  tcase_add_test(tc, exp_9);
  tcase_add_test(tc, exp_10);
  tcase_add_test(tc, exp_11);
  tcase_add_test(tc, exp_12);
  tcase_add_test(tc, exp_13);
  tcase_add_test(tc, exp_14);
  tcase_add_test(tc, exp_15);
  tcase_add_test(tc, exp_16);
  tcase_add_test(tc, exp_17);
  tcase_add_test(tc, exp_18);
  tcase_add_test(tc, exp_19);
  tcase_add_test(tc, exp_20);
  tcase_add_test(tc, exp_21);
  tcase_add_test(tc, exp_22);
  tcase_add_test(tc, exp_23);
  tcase_add_test(tc, exp_24);
  tcase_add_test(tc, exp_25);
  tcase_add_test(tc, exp_26);
  tcase_add_test(tc, exp_27);

  suite_add_tcase(s, tc);
  return s;
}
