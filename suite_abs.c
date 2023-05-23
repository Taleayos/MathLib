#include <stdlib.h>

#include "suite_math.h"

START_TEST(abs_1) { ck_assert_int_eq(s21_abs(123), abs(123)); }
END_TEST

START_TEST(abs_2) { ck_assert_int_eq(s21_abs(-123), abs(-123)); }
END_TEST

START_TEST(abs_3) { ck_assert_int_eq(s21_abs(-INT_MAX), abs(-INT_MAX)); }
END_TEST

START_TEST(abs_4) { ck_assert_int_eq(s21_abs(INT_MAX), abs(INT_MAX)); }
END_TEST

START_TEST(abs_5) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(abs_6) { ck_assert_int_eq(s21_abs(+0), abs(+0)); }
END_TEST

START_TEST(abs_7) { ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN)); }
END_TEST

START_TEST(abs_8) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(abs_9) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(abs_10) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(abs_11) { ck_assert_int_eq(s21_abs(INT_MIN), abs(INT_MIN)); }
END_TEST

START_TEST(abs_12) { ck_assert_int_eq(s21_abs((int)-NAN), abs((int)-NAN)); }
END_TEST

Suite *suite_abs(void) {
  Suite *s = suite_create("s21_abs");
  TCase *tc = tcase_create("case_abs");

  tcase_add_test(tc, abs_1);
  tcase_add_test(tc, abs_2);
  tcase_add_test(tc, abs_3);
  tcase_add_test(tc, abs_4);
  tcase_add_test(tc, abs_5);
  tcase_add_test(tc, abs_6);
  tcase_add_test(tc, abs_7);
  tcase_add_test(tc, abs_8);
  tcase_add_test(tc, abs_9);
  tcase_add_test(tc, abs_10);
  tcase_add_test(tc, abs_11);
  tcase_add_test(tc, abs_12);

  suite_add_tcase(s, tc);
  return s;
}
