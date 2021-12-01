#include <iostream>

int main() {
  int N, M = 0, sum = 0;
  int t;

  std::cout.precision(4);

  std::cin >> N;

  for (int i=0; i<N; i++) {
    std::cin >> t;
    sum += t;
    if (M < t)
      M = t;
  }

  std::cout << (double)sum / M / N * 100 << std::endl;
}
