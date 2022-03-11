#include <iostream>

int main() {
  int n;
  while (std::cin >> n) {
    int result = 1;
    int temp;
    for (int i = 0; i < n && std::cin >> temp; i++) {
      if (temp % 2 != 0) result *= temp;
    }
    std::cout << result << std::endl;
  }
  return 0;
}