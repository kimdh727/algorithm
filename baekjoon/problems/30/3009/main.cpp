#include <iostream>

int main() {
  int x1, y1, x2, y2, x3 ,y3;

  std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  std::cout << (x1 ^ x2 ^ x3) << " " << (y1 ^ y2 ^ y3) << std::endl;
}
