#include "s21_math.h"

long double s21_pow(double x, double y) {
  long double res = 1;
  if (is_nan(x) || is_nan(y)) {  //Ошибка NaN
    if ((y == 0) || (x == 1)) {  // 1^nan = 1; nan^0 = 1;
      res = 1;
    } else {
      res = S21_NAN;
    }
  } else if ((x == S21_INF) || (x == -S21_INF)) {  // В основании Inf или -Inf
    if (y == S21_INF) {
      res = y;
    }
    if ((y < 0) &&
        (x == S21_INF)) {  // В отрицательной степени  при Inf возвращает 0.
      res = 0;
    }
    if ((y < 0) && (x == (-S21_INF))) {
      if (y == -1) {
        res = (-DBL_MIN);  //  -Inf ^ -1 = -0. (А у меня не возвращает!!!!!)
      } else {
        res = 0;  // В дробной отрицательной степени при -Inf возвращает 0.
      }
    }
    if (y > 0) {  // Если степень положительная
      if ((int)y % 2 == 0) {  // И четная
        res = S21_INF;        // Возвращает Inf
      } else {  //Если степень нечетная и основание Inf возвращает Inf
        res = x;  //Если степень нечетная и основание -Inf возвращает -Inf
      }
    }
  } else if (y == S21_INF) {  // степень = inf
    if ((int)x == 0) {        // 0^inf = 0
      res = 0;
    } else if ((x == -1) || (x == 1)) {  // -1^inf= 1; 1^inf = 1;
      res = 1;
    } else {
      res = y;  // double^inf = inf
    }
  } else if (y == -S21_INF) {  // степень =  -inf
    if ((int)x == 0) {         // 0^-inf = inf
      res = S21_INF;
    } else if (((x == -1) || (x == 1))) {  // -1^-inf= 1; 1^-inf = 1;
      res = 1;
    } else {
      res = 0;  // double^-inf = 0;
    }
  } else if (y == 0) {  // Степень 0 возвращает 1
    res = 1;
  } else if ((x == 0) && (y > 0)) {
    res = 0;
  } else if (y == (int)y) {  //ЕСЛИ СТЕПЕНЬ ЦЕЛОЕ ЧИСЛО
    if (y > 0) {             // И положительное число.
      for (int i = 0; i < y; i++) {
        res *= x;
      }
    }
    if (y < 0) {  // Если степень целое отрицательное число.
      x = 1 / x;
      for (int i = 0; i < s21_fabs(y); i++) {
        res *= x;
      }
    }
  } else {        // ЕСЛИ СТЕПЕНЬ ДРОБНОЕ ЧИСЛО
                  // И положительное число
    if (x > 0) {  // Положительное основание
      double temp = y;
      if (y < 0) y = -y;
      res = s21_exp(y * s21_log(x));
      if (temp < 0) res = 1 / res;  //Если степень дробное и отрицательное число
    } else if ((x == 0) && (y < 0)) {  // Отрицательное остнование
      res = S21_INF;
    } else {
      res = S21_NAN;
    }
  }
  return res;
}
