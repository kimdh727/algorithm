#include <iostream>

bool isPrime(int n) {
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return n != 1;
}

int main() {
  int N, num, cnt = 0;

  std::cin >> N;

  while (N--) {
    std::cin >> num;
    if (isPrime(num))
      cnt++;
  }

  std::cout << cnt << std::endl;
}
