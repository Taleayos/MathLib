#include "suite_math.h"

START_TEST(log_1) {
  ck_assert_ldouble_nan(s21_log(NAN));
  ck_assert_ldouble_nan(log(NAN));

  ck_assert_ldouble_nan(s21_log(-INFINITY));
  ck_assert_ldouble_nan(log(-INFINITY));

  ck_assert_ldouble_infinite(s21_log(INFINITY));
  ck_assert_ldouble_infinite(log(INFINITY));
}
END_TEST

START_TEST(log_2) { ck_assert_ldouble_eq_tol(s21_log(100), log(100), S21_EPS); }
END_TEST

START_TEST(log_3) {
  ck_assert_ldouble_infinite(s21_log(0));
  ck_assert_ldouble_infinite(log(0));
  ck_assert_ldouble_infinite(s21_log(-0));
  ck_assert_ldouble_infinite(log(-0));
}
END_TEST

START_TEST(log_4) { ck_assert_ldouble_eq_tol(s21_log(1), log(1), S21_EPS); }
END_TEST

START_TEST(log_5) {
  ck_assert_ldouble_eq_tol(s21_log(1.0), log(1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_log(1.1), log(1.1), S21_EPS);
  ck_assert_ldouble_nan(s21_log(-1.0));
  ck_assert_ldouble_nan(log(-1.0));
}
END_TEST

START_TEST(log_6) { ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), S21_EPS); }
END_TEST

START_TEST(log_7) {
  ck_assert_ldouble_eq_tol(s21_log(456.789), log(456.789), S21_EPS);
}
END_TEST

START_TEST(log_8) {
  ck_assert_ldouble_eq_tol(s21_log(0.001), log(0.001), S21_EPS);
}
END_TEST

START_TEST(log_9) { ck_assert_ldouble_eq_tol(s21_log(0.4), log(0.4), S21_EPS); }
END_TEST

START_TEST(log_10) {
  ck_assert_ldouble_eq_tol(s21_log(DBL_MAX), log(DBL_MAX), S21_EPS);
}
END_TEST

START_TEST(log_11) {
  ck_assert_ldouble_eq_tol(s21_log(M_PI / 3), log(M_PI / 3), S21_EPS);
}
END_TEST

START_TEST(log_12) {
  ck_assert_ldouble_eq_tol(s21_log(9.234578353457e-6), log(9.234578353457e-6),
                           S21_EPS);
}
END_TEST

START_TEST(log_13) {
  ck_assert_ldouble_eq_tol(s21_log(9.234578353457e6), log(9.234578353457e6),
                           S21_EPS);
}
END_TEST

START_TEST(log_14) {
  ck_assert_ldouble_eq_tol(s21_log(1234567.000000004), log(1234567.000000004),
                           S21_EPS);
}
END_TEST

START_TEST(log_15) {
  ck_assert_ldouble_eq_tol(s21_log(987654321123.123e-30),
                           log(987654321123.123e-30), S21_EPS);
}
END_TEST

START_TEST(log_16) {
  ck_assert_ldouble_eq_tol(s21_log(98765.123e-11), log(98765.123e-11), S21_EPS);
}
END_TEST

START_TEST(log_17) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-80), log(1.1e-80), S21_EPS);
}
END_TEST

START_TEST(log_18) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-45), log(1.1e-45), S21_EPS);
}
END_TEST

START_TEST(log_19) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-23), log(1.1e-23), S21_EPS);
}
END_TEST

START_TEST(log_20) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-19), log(1.1e-19), S21_EPS);
}
END_TEST

START_TEST(log_21) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-18), log(1.1e-18), S21_EPS);
}
END_TEST

START_TEST(log_22) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-17), log(1.1e-17), S21_EPS);
}
END_TEST

START_TEST(log_23) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-16), log(1.1e-16), S21_EPS);
}
END_TEST

START_TEST(log_24) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-15), log(1.1e-15), S21_EPS);
}
END_TEST

START_TEST(log_25) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-14), log(1.1e-14), S21_EPS);
}
END_TEST

START_TEST(log_26) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-13), log(1.1e-13), S21_EPS);
}
END_TEST

START_TEST(log_27) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-12), log(1.1e-12), S21_EPS);
}
END_TEST

START_TEST(log_28) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-11), log(1.1e-11), S21_EPS);
}
END_TEST

Suite *suite_log(void) {
  Suite *s = suite_create("s21_log");
  TCase *tc = tcase_create("case_log");

  tcase_add_test(tc, log_1);
  tcase_add_test(tc, log_2);
  tcase_add_test(tc, log_3);
  tcase_add_test(tc, log_4);
  tcase_add_test(tc, log_5);
  tcase_add_test(tc, log_6);
  tcase_add_test(tc, log_7);
  tcase_add_test(tc, log_8);
  tcase_add_test(tc, log_9);
  tcase_add_test(tc, log_10);
  tcase_add_test(tc, log_11);
  tcase_add_test(tc, log_12);
  tcase_add_test(tc, log_13);
  tcase_add_test(tc, log_14);
  tcase_add_test(tc, log_15);
  tcase_add_test(tc, log_16);
  tcase_add_test(tc, log_17);
  tcase_add_test(tc, log_18);
  tcase_add_test(tc, log_19);
  tcase_add_test(tc, log_20);
  tcase_add_test(tc, log_21);
  tcase_add_test(tc, log_22);
  tcase_add_test(tc, log_23);
  tcase_add_test(tc, log_24);
  tcase_add_test(tc, log_25);
  tcase_add_test(tc, log_26);
  tcase_add_test(tc, log_27);
  tcase_add_test(tc, log_28);

  suite_add_tcase(s, tc);
  return s;
}
