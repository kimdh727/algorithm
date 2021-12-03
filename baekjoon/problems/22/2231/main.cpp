#include <iostream>

int main() {
  int N, res = 0;

  std::cin >> N;

  for (int i = N - 54; i < N; i++) {
    int temp = i;
    int sum = temp;

    while (temp) {
      sum += temp % 10;
      temp /= 10;
    }

    if (sum == N) {
      res = i;
      break;
    }
  }

  std::cout << res << std::endl;
}
