#include <iostream>

int main() {
  int a, b, c;

  while (std::cin >> a >> b >> c)
  {
    if (!a && !b && !c) break;

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
      std::cout << "right" << std::endl;
    else
      std::cout << "wrong" << std::endl;
  }
}
