#include "s21_math.h"

long double s21_floor(double x) {
  double res = 0;
  if (!is_fin(x) || x == -0) {
    res = x;
  } else {
    if (x > 0) {
      res = (long long int)x;
    } else if (x <= -1) {
      if ((long long int)x == x) {
        res = (long long int)x;
      } else {
        res = (long long int)x - 1;
      }
    }
  }
  return res;
}
