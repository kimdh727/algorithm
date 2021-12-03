#include <iostream>
#include <cmath>

int main() {
  int R;

  std::cin >> R;

  printf("%.4lf\n%.4lf\n", R * R * M_PI, double(R * R * 2));
}
