#include <iostream>

int main() {
  int n, t, max = 0;

  for (int i=0; i<9; i++) {
    std::cin >> t;

    if (t > max) {
      n = i+1;
      max = t;
    }
  }

  std::cout << max << std::endl;
  std::cout << n << std::endl;
}
