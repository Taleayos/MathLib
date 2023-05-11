#include "suite_math.h"

START_TEST(tan_1) { ck_assert_float_eq(s21_tan(-15.01), tan(-15.01)); }
END_TEST

START_TEST(tan_2) {
  double num = 0.55;
  long double orig_res = s21_tan(num), our_res = s21_tan(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= S21_EPS)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_3) { ck_assert_float_eq(-9999999999, -9999999999); }
END_TEST

START_TEST(tan_4) {
  double num = NAN;
  long double orig_res = tan(num), our_res = s21_tan(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_5) {
  double num = INFINITY;
  long double orig_res = tan(num), our_res = s21_tan(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_6) {
  double num = -INFINITY;
  long double orig_res = tan(num), our_res = s21_tan(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_7) {
  double x = 0;
  ck_assert_double_eq_tol(s21_tan(x), tanl(x), S21_EPS);
}
END_TEST

START_TEST(tan_8) {
  ck_assert_ldouble_nan(s21_tan(-INFINITY));
  ck_assert_ldouble_nan(tanl(-INFINITY));
}
END_TEST

START_TEST(tan_9) {
  ck_assert_ldouble_nan(s21_tan(INFINITY));
  ck_assert_ldouble_nan(tanl(INFINITY));
}
END_TEST

START_TEST(tan_10) {
  ck_assert_ldouble_nan(s21_tan(NAN));
  ck_assert_ldouble_nan(tanl(NAN));
}
END_TEST

START_TEST(tan_11) {
  ck_assert_double_eq_tol(s21_tan(0.0), tanl(0.0), S21_EPS);
}
END_TEST

START_TEST(tan_12) {
  ck_assert_double_eq_tol(s21_tan(M_PI / 6), tanl(M_PI / 6), S21_EPS);
}
END_TEST

START_TEST(tan_13) {
  ck_assert_double_eq_tol(s21_tan(M_PI / 4), tanl(M_PI / 4), S21_EPS);
}
END_TEST

START_TEST(tan_14) {
  ck_assert_double_eq_tol(s21_tan(-2 * M_PI), tanl(-2 * M_PI), S21_EPS);
}
END_TEST

START_TEST(tan_15) {
  ck_assert_double_eq_tol(s21_tan(M_PI), tanl(M_PI), S21_EPS);
}
END_TEST

START_TEST(tan_16) {
  ck_assert_double_eq_tol(s21_tan(M_PI / 3), tanl(M_PI / 3), S21_EPS);
}
END_TEST

START_TEST(tan_17) {
  ck_assert_double_eq_tol(s21_tan(3 * M_PI / 3), tanl(3 * M_PI / 3), S21_EPS);
}
END_TEST

START_TEST(tan_18) {
  ck_assert_double_eq_tol(s21_tan(174.532925199433), tanl(174.532925199433),
                          S21_EPS);
}
END_TEST

START_TEST(tan_19) {
  ck_assert_double_eq_tol(s21_tan(-174.532925199433), tanl(-174.532925199433),
                          S21_EPS);
}
END_TEST

START_TEST(tan_20) {
  ck_assert_double_eq_tol(s21_tan(M_PI / 2), tanl(M_PI / 2), S21_EPS);
}
END_TEST

START_TEST(tan_21) {
  ck_assert_double_eq_tol(s21_tan(-M_PI / 2), tanl(-M_PI / 2), S21_EPS);
}
END_TEST

Suite *suite_tan(void) {
  Suite *s = suite_create("s21_tan");
  TCase *tc = tcase_create("case_tan");

  tcase_add_test(tc, tan_1);
  tcase_add_test(tc, tan_2);
  tcase_add_test(tc, tan_3);
  tcase_add_test(tc, tan_4);
  tcase_add_test(tc, tan_5);
  tcase_add_test(tc, tan_6);
  tcase_add_test(tc, tan_7);
  tcase_add_test(tc, tan_8);
  tcase_add_test(tc, tan_9);
  tcase_add_test(tc, tan_10);
  tcase_add_test(tc, tan_11);
  tcase_add_test(tc, tan_12);
  tcase_add_test(tc, tan_13);
  tcase_add_test(tc, tan_14);
  tcase_add_test(tc, tan_15);
  tcase_add_test(tc, tan_16);
  tcase_add_test(tc, tan_17);
  tcase_add_test(tc, tan_18);
  tcase_add_test(tc, tan_19);
  tcase_add_test(tc, tan_20);
  tcase_add_test(tc, tan_21);

  suite_add_tcase(s, tc);
  return s;
}
