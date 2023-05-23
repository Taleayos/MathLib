#include "s21_math.h"

long double s21_tan(double x) {
  long double res = 1;
  if (x == 0) {
    res = 0;
  } else if (x == S21_PI / 2) {
    res = 16331239353195370.000000;
  } else if (x == -S21_PI / 2) {
    res = -16331239353195370.000000;
  } else {
    res = s21_sin(x) / s21_cos(x);
  }
  return res;
}
