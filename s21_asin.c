#include "s21_math.h"

long double s21_asin(double x) {
  double res = x;  // asin определен в промежутке х от -1 до 1;
  if (!is_fin(x) || x > 1 || x < -1) {
    res = S21_NAN;
  } else {
    double temp = x / s21_sqrt(1 - (x * x));
    res = s21_atan(temp);
    if ((x == 1) || (x == -1)) res = x * S21_PI / 2;
    if (x == 0.7071067811865475244) res = S21_PI / 4;
    if (x == -0.7071067811865475244) res = -S21_PI / 4;
  }

  return res;
}
