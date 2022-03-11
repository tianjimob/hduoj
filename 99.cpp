#include <stdio.h>

#include <iostream>

int main() {
  int a, b, c;
  while (std::cin >> a >> b && (a != 0 && b != 0)) {
    a *= 100;
    for (int i = c = 0; i < 100; i++) {
      if ((a + i) % b == 0) printf(c++ ? " %02d" : "%02d", i);
    }
    std::cout << std::endl;
  }

  return 0;
}