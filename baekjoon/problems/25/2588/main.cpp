#include <iostream>

int main() {
  int a, b, t;
  std::cin >> a >> b;
  t = b;
  while (t) {
    std::cout << (t % 10) * a << std::endl;
    t /= 10;
  }
  std::cout << a * b << std::endl;
}
