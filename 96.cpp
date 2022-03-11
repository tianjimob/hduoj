#include <iostream>

int main() {
  int nGroup;
  std::cin >> nGroup;
  if (!std::cin) return 0;
  for (int i = 0; i < nGroup; i++) {
    int a, b;
    if (std::cin >> a >> b) {
      std::cout << (a % 100 + b % 100) % 100 << std::endl;
    }
  }
  return 0;
}