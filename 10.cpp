#include <stdio.h>

int main() {
  int m, n;
  while (scanf("%d %d", &m, &n) != EOF) {
    int c = 0;
    for (int i = m; i <= n; i++) {
      int sum = 0, reminder = 0, temp = i;
      reminder = temp % 10;
      temp /= 10;
      sum += reminder * reminder * reminder;
      reminder = temp % 10;
      temp /= 10;
      sum += reminder * reminder * reminder;
      sum += temp * temp * temp;
      if (sum == i) printf(c++ ? " %d" : "%d", i);
    }
    printf(c ? "\n" : "no\n");
  }
  return 0;
}