#include <iostream>

int main() {
  int N, cnt = 0;

  std::cin >> N;

  while (N > 0) {
    N -= (N % 5 == 0) ? 5 : 3;
    cnt++;
  }

  std::cout << (N == 0 ? cnt : -1) << std::endl;
}
