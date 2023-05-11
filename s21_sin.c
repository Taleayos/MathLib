#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0;
  long double temp = 0;
  if (!is_fin(x)) {
    res = S21_NAN;
  } else {
    if (x == S21_PI) res = S21_EPS;
    if (x == -S21_PI) res = -S21_EPS;
    if (x > 2 * S21_PI || x < -2 * S21_PI) {
      x = s21_fmod(x, 2 * S21_PI);
    }
    res = x;
    temp = x;
    for (double i = 1.; i < 200. && s21_fabs(temp) > S21_EPS; i++) {
      temp *= ((-1.) * x * x) / (2. * i * (2. * i + 1.));
      res += temp;
    }
  }
  return res;
}
