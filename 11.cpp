#include <stdio.h>

int main() {
  int m;
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    int n;
    scanf("%d", &n);
    bool flag = true;
    double sum = 0;
    for (int j = 1; j <= n; j++) {
      sum += (flag ? 1.0 / j : -1.0 / j);
      flag = !flag;
    }
    printf("%.2lf\n", sum);
  }

  return 0;
}