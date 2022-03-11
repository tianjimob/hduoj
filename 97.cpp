#include <iostream>

int sum(int num, int base) {
  int sum = 0;
  while (num) {
    sum += num % base;
    num /= base;
  }
  return sum;
}

int main() {
  int num;
  while (std::cin >> num && num != 0) {
    std::cout << num << " is "
              << (sum(num, 10) == sum(num, 12) && sum(num, 10) == sum(num, 16)
                      ? ""
                      : "not ")
              << "a Sky Number." << std::endl;
  }
  return 0;
}