#include <iostream>

bool isPrime(int n) {
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return n != 1;
}

int main() {
  int M, N, min = 0, sum = 0;

  std::cin >> M >> N;

  for (int i = M; i <=N; i++) {
    if (isPrime(i)) {
      if (min == 0)
        min = i;
      sum += i;
    }
  }

  if (min)
    std::cout << sum << std::endl << min << std::endl;
  else
    std::cout << -1 << std::endl;
}
