#include <cmath>
#include <cstdio>

const double PI = 3.1415927;

int main() {
  double radiu;
  while (std::scanf("%lf", &radiu) == 1) {
    printf("%.3lf\n", 4.0 * PI * radiu * radiu * radiu / 3.0);
  }
  return 0;
}