#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = 0;
  if (!is_fin(x)) {  // определено в хедере. is_fin = normal, subnormal or zero,
                     // but not infinite or NaN
    res = x;
  } else {
    res = (long long int)x;
    if (s21_fabs(x) > 0. && x != res) {
      if (x != DBL_MAX) {  //максимальное конечное представимое число с
                           //плавающей точкой (библиотека float.h)
        if (x > 0.) {
          res += 1;
        }
      } else {
        res = DBL_MAX;
      }
    }
  }
  return res;
}
