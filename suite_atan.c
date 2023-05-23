#include "suite_math.h"

START_TEST(atan_1) {
  ck_assert_ldouble_eq_tol(s21_atan(15.01), atan(15.01), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-15.01), atan(-15.01), S21_EPS);
}
END_TEST

START_TEST(atan_2) {
  ck_assert_ldouble_eq_tol(s21_atan(0.99), atan(0.99), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-0.99), atan(-0.99), S21_EPS);
}
END_TEST

START_TEST(atan_3) {
  ck_assert_ldouble_eq_tol(-9999999999, -9999999999, S21_EPS);
  ck_assert_ldouble_eq_tol(-9999999999, -9999999999, S21_EPS);
}
END_TEST

START_TEST(atan_4) {
  ck_assert_ldouble_eq_tol(s21_atan(1.0), atan(1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(1.1), atan(1.1), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-1.0), atan(-1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-1.1), atan(-1.1), S21_EPS);
}
END_TEST

START_TEST(atan_5) {
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), S21_EPS);
}
END_TEST

START_TEST(atan_6) {
  ck_assert_ldouble_eq_tol(s21_atan(0.0), atan(0.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-0.0), atan(-0.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-0), atan(-0), S21_EPS);
}
END_TEST

START_TEST(atan_7) {
  ck_assert_ldouble_eq_tol(s21_atan(1 / 2), atan(1 / 2), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-1 / 2), atan(-1 / 2), S21_EPS);
}
END_TEST

START_TEST(atan_8) {
  ck_assert_ldouble_eq_tol(s21_atan(2 / 2), atan(2 / 2), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-2 / 2), atan(-2 / 2), S21_EPS);
}
END_TEST

START_TEST(atan_9) {
  ck_assert_ldouble_eq_tol(s21_atan(1.23456e-7), atan(1.23456e-7), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-1.23456e-7), atan(-1.23456e-7), S21_EPS);
}
END_TEST

START_TEST(atan_10) {
  ck_assert_ldouble_eq_tol(s21_atan(2.1234567), atan(2.1234567), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-2.1234567), atan(-2.1234567), S21_EPS);
}
END_TEST

START_TEST(atan_11) {
  ck_assert_ldouble_eq_tol(s21_atan(2.1234567e-7), atan(2.1234567e-7), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-2.1234567e-7), atan(-2.1234567e-7),
                           S21_EPS);
}
END_TEST

START_TEST(atan_12) {
  ck_assert_ldouble_eq_tol(s21_atan(2.1234567e-16), atan(2.1234567e-16),
                           S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-2.1234567e-16), atan(-2.1234567e-16),
                           S21_EPS);
}
END_TEST

START_TEST(atan_13) {
  ck_assert_ldouble_eq_tol(s21_atan(INFINITY), atan(INFINITY), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-INFINITY), atan(-INFINITY), S21_EPS);
}
END_TEST

START_TEST(atan_14) {
  ck_assert_ldouble_nan(s21_atan(NAN));
  ck_assert_ldouble_nan(atan(NAN));
}
END_TEST

START_TEST(atan_15) {
  ck_assert_ldouble_nan(s21_atan(-NAN));
  ck_assert_ldouble_nan(atan(-NAN));
}
END_TEST

START_TEST(atan_16) {
  ck_assert_ldouble_eq_tol(s21_atan(M_PI_2), atan(M_PI_2), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-M_PI_2), atan(-M_PI_2), S21_EPS);
}
END_TEST

START_TEST(atan_17) {
  ck_assert_ldouble_eq_tol(s21_atan(INFINITY), (M_PI / 2.0), S21_EPS);
  ck_assert_ldouble_eq_tol(atan(INFINITY), (M_PI / 2.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan((-INFINITY)), (-M_PI / 2.0), S21_EPS);
  ck_assert_ldouble_eq_tol(atan(-INFINITY), (-M_PI / 2.0), S21_EPS);
}
END_TEST

START_TEST(atan_18) {
  ck_assert_ldouble_eq_tol(s21_atan(sqrt(3) / 2), atan(sqrt(3) / 2), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-sqrt(3) / 2), atan(-sqrt(3) / 2), S21_EPS);
}
END_TEST

START_TEST(atan_19) {
  ck_assert_ldouble_eq_tol(s21_atan(M_SQRT2 / 2), atan(M_SQRT2 / 2), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-M_SQRT2 / 2), atan(-M_SQRT2 / 2), S21_EPS);
}
END_TEST

START_TEST(atan_20) {
  ck_assert_ldouble_eq_tol(s21_atan(DBL_MAX), atan(DBL_MAX), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-DBL_MAX), atan(-DBL_MAX), S21_EPS);
}
END_TEST

Suite *suite_atan(void) {
  Suite *s = suite_create("s21_atan");
  TCase *tc = tcase_create("case_atan");

  tcase_add_test(tc, atan_1);
  tcase_add_test(tc, atan_2);
  tcase_add_test(tc, atan_3);
  tcase_add_test(tc, atan_4);
  tcase_add_test(tc, atan_5);
  tcase_add_test(tc, atan_6);
  tcase_add_test(tc, atan_7);
  tcase_add_test(tc, atan_8);
  tcase_add_test(tc, atan_9);
  tcase_add_test(tc, atan_10);
  tcase_add_test(tc, atan_11);
  tcase_add_test(tc, atan_12);
  tcase_add_test(tc, atan_13);
  tcase_add_test(tc, atan_14);
  tcase_add_test(tc, atan_15);
  tcase_add_test(tc, atan_16);
  tcase_add_test(tc, atan_17);
  tcase_add_test(tc, atan_18);
  tcase_add_test(tc, atan_19);
  tcase_add_test(tc, atan_20);

  suite_add_tcase(s, tc);
  return s;
}
