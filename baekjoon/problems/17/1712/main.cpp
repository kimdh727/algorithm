#include <iostream>

/**
 *  A + B * N < C * N
 *  N (C - B) > A
 *  if (C - B) > 0:
 *    N > A / (C - B)
 *  else
 *    N = -1
 *
 */

int main() {
  int A, B, C;

  std::cin >> A >> B >> C;

  std::cout << (C > B ? A / (C - B) + 1 : -1) << std::endl;
}
