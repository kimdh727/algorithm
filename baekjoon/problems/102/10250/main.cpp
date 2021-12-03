#include <iostream>

int main() {
  int T, H, W, N;

  std::cin >> T;

  while (T--) {
    std::cin >> H >> W >> N;

    std::cout << ((N % H) ? (N % H) * 100 + (N / H + 1) : H * 100 + (N / H)) << std::endl;
  }
}
