/* heron approximation */
#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void) {
  double const eps = 1E-9;
  double const a = 34.0;
  double x = 0.5;

  while (fabs(1.0 - a * x) >= eps) {
    x *= (2.0 - a * x);
    printf(x);
  }
  return EXIT_SUCCESS;
}
