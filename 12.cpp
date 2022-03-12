#include <math.h>

#include <iostream>

bool isPrime(int num) {
  for (int i = sqrt(num); i >= 2; i--) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  int x, y;
  while (std::cin >> x >> y) {
    if (x == 0 && y == 0) break;
    bool result = true;
    for (int i = x; i <= y; i++) {
      int poly = i * i + i + 41;
      if (!isPrime(poly)) {
        result = false;
      }
    }
    if (result)
      std::cout << "OK" << std::endl;
    else
      std::cout << "Sorry" << std::endl;
  }
  return 0;
}