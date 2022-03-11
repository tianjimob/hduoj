#include <cstdio>

const int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  int y, m, d;
  while (std::scanf("%d/%d/%d", &y, &m, &d) == 3) {
    int days = 0;
    for (int i = 0; i < m - 1; i++) {
      days += months[i];
    }
    days += d;
    if (m > 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)) {
      days += 1;
    }
    std::printf("%d\n", days);
  }

  return 0;
}