#include <iostream>

int main() {
  int A, B;

  std::cin >> A >> B;

  A = (A % 10 * 100) + ((A % 100) / 10 * 10) + A / 100;
  B = (B % 10 * 100) + ((B % 100) / 10 * 10) + B / 100;

  std::cout << (A > B ? A : B) << std::endl;
}
