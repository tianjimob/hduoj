#include <math.h>

#include <iostream>

bool isPrime(int num) {
  for (int i = sqrt(num); i >= 2; i--) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  int num;
  while (std::cin >> num && num != 0) {
    int count = 0;
    for (int i = 2; i < num / 2; i++) {
      if (isPrime(i) && isPrime(num - i)) {
        ++count;
      }
    }
    std::cout << count << std::endl;
  }

  return 0;
}