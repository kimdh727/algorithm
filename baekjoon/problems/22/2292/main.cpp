#include <iostream>

int main() {
  int N;
  int i = 1, cnt = 1;

  std::cin >> N;

  while (i < N) {
    i += cnt * 6;
    cnt++;
  }

  std::cout << cnt << std::endl;
}
