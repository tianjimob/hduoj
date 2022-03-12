#include <math.h>
#include <stdio.h>

int main() {
  int n, m;
  while (scanf("%d %d", &n, &m) != EOF) {
    double sum = 0, temp = n;
    for (int i = 0; i < m; i++) {
      sum += temp;
      temp = sqrt(temp);
    }
    printf("%.2lf\n", sum);
  }
  return 0;
}