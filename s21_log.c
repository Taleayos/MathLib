#include "s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  long double temp = 0;
  int ex_pow = 0;
  if (is_fin(x) && (x > 0)) {
    for (; x >= S21_EXP; x /= S21_EXP, ex_pow++) continue;
    for (int i = 0; i < 100; i++) {
      temp = res;
      res =
          temp + 2 * (x - s21_exp(temp)) / (x + s21_exp(temp));  // Метод Галлея
    }
    res += ex_pow;
  } else {
    if (x == 0) {
      res = -S21_INF;
    } else if (x == S21_INF) {
      res = x;
    } else if ((x == -S21_INF) || (is_nan(x))) {
      res = S21_NAN;
    } else if (x < 0) {
      res = S21_NAN;
    }
  }
  return res;
}
