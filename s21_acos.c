#include "s21_math.h"

long double s21_acos(double x) {
  double res = 1;  // Область определения [-1...1]
  double temp = 0;
  if (!is_fin(x) || x > 1 || x < -1) {
    res = S21_NAN;
  } else {
    temp = s21_sqrt((1 - x) / 2);
    res = 2 * s21_asin(temp);
    if (x == -1) res = S21_PI;
    if (x == 0) res = S21_PI / 2;
  }
  return res;
}
