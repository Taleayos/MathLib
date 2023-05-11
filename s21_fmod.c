#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res;
  if (x == S21_INF || y == 0 || x == -S21_INF) {
    res = S21_NAN;
  } else if ((y == S21_INF) || (y == -S21_INF)) {
    res = x;
  } else if (s21_fabs(y) < 1e-7) {  // fabs - если y отрицательный
    res = 0;
  } else {
    long long int quot = 0;  // берем int (без дробной части)
    quot = x / y;
    res = (long double)x - quot * (long double)y;
  }
  return res;
}
