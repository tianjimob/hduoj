#include <math.h>
#include <stdio.h>

int main() {
  double n;
  while (scanf("%lf", &n) != EOF) {
    printf("%.2lf\n", fabs(n));
  }
  return 0;
}