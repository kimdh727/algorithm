#include <iostream>

int main() {
  int x, y, res;
  std::cin >> x >> y;
  if (y > 0) {
    if (x > 0) res = 1;
    else res = 2;
  } else {
    if (x < 0) res = 3;
    else res = 4;
  }
  std::cout << res << std::endl;
}
