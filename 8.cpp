#include <iostream>

int main() {
  int n;
  while (std::cin >> n && n != 0) {
    int a = 0, b = 0, c = 0;
    double temp;
    for (int i = 0; i < n; i++) {
      std::cin >> temp;
      if (temp == 0)
        ++b;
      else if (temp > 0)
        ++c;
      else
        ++a;
    }
    std::cout << a << ' ' << b << ' ' << c << std::endl;
  }
  return 0;
}