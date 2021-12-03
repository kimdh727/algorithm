#include <iostream>

/**
 * (A * N) - (B * (N - 1)) >= V
 * (A - B)N >= V - B
 * N >=  (V - B) / (A - B)
 */
int main() {
  int A, B, V;

  std::cin >> A >> B >> V;

  std::cout << ((V - B) % (A - B) == 0 ? (V - B) / (A - B) : (V - B) / (A - B) + 1) << std::endl;
}
