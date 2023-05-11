#include "suite_math.h"

int main(void) {
  Suite *suites[] = {suite_abs(),   suite_acos(), suite_asin(), suite_atan(),
                     suite_ceil(),  suite_cos(),  suite_exp(),  suite_fabs(),
                     suite_floor(), suite_fmod(), suite_log(),  suite_pow(),
                     suite_sin(),   suite_sqrt(), suite_tan(),  NULL};

  for (Suite **pS = suites; *pS != NULL; pS++) {
    SRunner *sr = srunner_create(*pS);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    srunner_free(sr);
  }
  return 0;
}
