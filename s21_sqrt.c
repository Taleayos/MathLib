#include "s21_math.h"

long double s21_sqrt(double x) {  // If x is negative, the sqrt function will
                                  // return a domain error.
  double sqrt, temp;
  if ((x < 0) ||
      (is_nan(x))) {  // Функция возвращает nan при отрицательном x и x=-Inf;
    sqrt = S21_NAN;
  } else {
    if (!is_inf(x)) {  // Стандартная работа
      sqrt = x / 2;
      temp = 0;
      while (sqrt != temp) {
        temp = sqrt;
        sqrt = ((x / temp) + temp) / 2;
      }
    } else {
      sqrt = S21_INF;  // Функция возвращает inf при x = Inf;
    }
  }
  return sqrt;
}
