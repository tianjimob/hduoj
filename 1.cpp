#include <cmath>
#include <cstdio>

int main() {
  double x[2], y[2];
  double a, b;
  while (std::scanf("%lf%lf%lf%lf", &x[0], &x[1], &y[0], &y[1]) == 4) {
    a = x[0] - y[0];
    b = x[1] - y[1];
    printf("%.2lf\n", std::sqrt(a * a + b * b));
  }
  return 0;
}