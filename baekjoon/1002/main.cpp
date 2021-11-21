#include <iostream>
#include <math.h>

int main() {
  int T;
  int x1, x2, y1, y2, r1, r2;
  int res;

  std::cin >> T;

  while (T) {
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    int dx = x1 - x2;
    int dy = y1 - y2;
    double d = sqrt(dx * dx + dy * dy);

    if (d == 0) {
      if (r1 == r2) res = -1;
      else res = 0;
    } else if (d > r1 + r2 || d < abs(r1 - r2)) {
      res = 0;
    } else if (d == r1 + r2 || d == abs(r1 - r2)) {
      res = 1;
    } else {
      res = 2;
    }

    std::cout << res << std::endl;

    T--;
  }
}
