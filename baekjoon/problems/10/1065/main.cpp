#include <iostream>

bool func(int n) {
  int diff;

  diff = ((n / 10) % 10) - (n % 10);

  while (n >= 10) {
    if (diff != (((n / 10) % 10) - (n % 10)))
      return false;
    n /= 10;
  }

  return true;
}

int main() {
  int N, cnt = 0;

  std::cin >> N;

  for (int i=1; i<=N; i++) {
    if (func(i))
      cnt++;
  }

  std::cout << cnt << std::endl;
}
