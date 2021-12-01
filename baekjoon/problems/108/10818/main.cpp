#include <iostream>

int main() {
  int N, t;
  int min = 1000000;
  int max = -1000000;
  std::cin >> N;

  for (int i=0; i<N; i++) {
    std::cin >> t;
    if (min > t) min = t;
    if (max < t) max = t;
  }

  std::cout << min << " " << max << std::endl;
}
