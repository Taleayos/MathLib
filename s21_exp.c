#include "s21_math.h"

long double s21_exp(double x) {
  long double res = 1;
  long double temp = 1;
  int n = 1;
  long double temp_x = 0;
  if (!is_fin(x)) {
    if ((is_nan(x)) || (x == S21_INF)) res = x;
    if (x == -S21_INF) res = 0;
  } else {
    if (x < 0) {
      temp_x = x;
      x = -x;
    }
    for (int i = 0; i < 1000; i++) {
      temp *= x / n;
      n++;
      res += temp;
      if (res > DBL_MAX) {
        res = S21_INF;
        break;
      }
    }
    if (temp_x < 0) {
      if (res > DBL_MAX) {
        res = 0;
      } else {
        res = 1 / res;
      }
    }
  }
  return res;
}
