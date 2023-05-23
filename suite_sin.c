#include "suite_math.h"

START_TEST(sin_1) { ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), S21_EPS); }
END_TEST

START_TEST(sin_2) { ck_assert_ldouble_eq_tol(s21_sin(-0), sin(-0), S21_EPS); }
END_TEST

START_TEST(sin_3) { ck_assert_ldouble_eq_tol(s21_sin(1), sin(1), S21_EPS); }
END_TEST

START_TEST(sin_4) { ck_assert_ldouble_eq_tol(s21_sin(-1), sin(-1), S21_EPS); }
END_TEST

START_TEST(sin_5) { ck_assert_ldouble_eq_tol(s21_sin(0.0), sin(0.0), S21_EPS); }
END_TEST

START_TEST(sin_6) {
  ck_assert_ldouble_eq_tol(s21_sin(0.55), sin(0.55), S21_EPS);
}
END_TEST

START_TEST(sin_7) {
  ck_assert_ldouble_eq_tol(s21_sin(0.999999), sin(0.999999), S21_EPS);
}
END_TEST

START_TEST(sin_8) {
  ck_assert_ldouble_eq_tol(s21_sin(-0.999999), sin(-0.999999), S21_EPS);
}
END_TEST

START_TEST(sin_9) {
  ck_assert_ldouble_eq_tol(s21_sin(174.532925199433), sin(174.532925199433),
                           S21_EPS);
}
END_TEST

START_TEST(sin_10) {
  ck_assert_ldouble_eq_tol(s21_sin(-174.532925199433), sin(-174.532925199433),
                           S21_EPS);
}
END_TEST

START_TEST(sin_11) {
  ck_assert_ldouble_nan(s21_sin(-INFINITY));
  ck_assert_ldouble_nan(sin(-INFINITY));
}
END_TEST

START_TEST(sin_12) {
  ck_assert_ldouble_nan(s21_sin(INFINITY));
  ck_assert_ldouble_nan(sin(INFINITY));
}
END_TEST

START_TEST(sin_13) {
  ck_assert_ldouble_nan(s21_sin(NAN));
  ck_assert_ldouble_nan(sin(NAN));
}
END_TEST

START_TEST(sin_14) {
  ck_assert_ldouble_nan(s21_sin(-NAN));
  ck_assert_ldouble_nan(sin(-NAN));
}
END_TEST

START_TEST(sin_15) {
  ck_assert_ldouble_eq_tol(s21_sin(M_PI / 6), sin(M_PI / 6), S21_EPS);
}
END_TEST

START_TEST(sin_16) {
  ck_assert_ldouble_eq_tol(s21_sin(M_PI_4), sin(M_PI_4), S21_EPS);
}
END_TEST

START_TEST(sin_17) {
  ck_assert_ldouble_eq_tol(s21_sin(M_PI / 3), sin(M_PI / 3), S21_EPS);
}
END_TEST

START_TEST(sin_18) {
  ck_assert_ldouble_eq_tol(s21_sin(M_PI_2), sin(M_PI_2), S21_EPS);
}
END_TEST

START_TEST(sin_19) {
  ck_assert_ldouble_eq_tol(s21_sin(3 * M_PI_2), sin(3 * M_PI_2), S21_EPS);
}
END_TEST

START_TEST(sin_20) {
  ck_assert_ldouble_eq_tol(s21_sin(2 * M_PI), sin(2 * M_PI), S21_EPS);
}
END_TEST

START_TEST(sin_21) {
  ck_assert_ldouble_eq_tol(s21_sin(-2 * M_PI), sin(-2 * M_PI), S21_EPS);
}
END_TEST

START_TEST(sin_22) {
  ck_assert_ldouble_eq_tol(s21_sin(-3 * M_PI), sin(-3 * M_PI), S21_EPS);
}
END_TEST

START_TEST(sin_23) {
  ck_assert_ldouble_eq_tol(s21_sin(-M_PI), sin(-M_PI), S21_EPS);
}
END_TEST

START_TEST(sin_24) {
  ck_assert_ldouble_eq_tol(s21_sin(M_1_PI), sin(M_1_PI), S21_EPS);
}
END_TEST

START_TEST(sin_25) {
  ck_assert_ldouble_eq_tol(s21_sin(M_SQRT1_2), sin(M_SQRT1_2), S21_EPS);
}
END_TEST

Suite *suite_sin(void) {
  Suite *s = suite_create("s21_sin");
  TCase *tc = tcase_create("case_sin");

  tcase_add_test(tc, sin_1);
  tcase_add_test(tc, sin_2);
  tcase_add_test(tc, sin_3);
  tcase_add_test(tc, sin_4);
  tcase_add_test(tc, sin_5);
  tcase_add_test(tc, sin_6);
  tcase_add_test(tc, sin_7);
  tcase_add_test(tc, sin_8);
  tcase_add_test(tc, sin_9);
  tcase_add_test(tc, sin_10);
  tcase_add_test(tc, sin_11);
  tcase_add_test(tc, sin_12);
  tcase_add_test(tc, sin_13);
  tcase_add_test(tc, sin_14);
  tcase_add_test(tc, sin_15);
  tcase_add_test(tc, sin_16);
  tcase_add_test(tc, sin_17);
  tcase_add_test(tc, sin_18);
  tcase_add_test(tc, sin_19);
  tcase_add_test(tc, sin_20);
  tcase_add_test(tc, sin_21);
  tcase_add_test(tc, sin_22);
  tcase_add_test(tc, sin_23);
  tcase_add_test(tc, sin_24);
  tcase_add_test(tc, sin_25);

  suite_add_tcase(s, tc);
  return s;
}
