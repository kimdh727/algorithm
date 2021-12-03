#include <iostream>

int fac(int n) {
  if (n <= 1) return 1;
  return n * fac(n-1);
}

int main() {
  int N;

  std::cin >> N;

  std::cout << fac(N) << std::endl;
}
