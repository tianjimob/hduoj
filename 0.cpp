#include <algorithm>
#include <iostream>

int main() {
  char c[3];
  while (!std::cin.fail()) {
    for (int i = 0; i < 3; i++) {
      std::cin >> c[i];
    }
    if (c[1] < c[0]) std::swap(c[1], c[0]);
    if (c[2] < c[1]) std::swap(c[2], c[1]);
    if (c[1] < c[0]) std::swap(c[1], c[0]);
    for (int i = 0; i < 3; i++) {
      std::cout << c[i] << ' ';
    }
    std::cout << std::endl;
  }
  return 0;
}