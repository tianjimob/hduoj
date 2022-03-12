#include <iostream>

int main() {
  int l, h;
  while (std::cin >> l >> h) {
    int sEven = 0, sOdd = 0;
    for (int i = l; i <= h; i++) {
      if (i % 2)
        sOdd += i * i * i;
      else
        sEven += i * i;
    }
    std::cout << sEven << ' ' << sOdd << std::endl;
  }
  return 0;
}