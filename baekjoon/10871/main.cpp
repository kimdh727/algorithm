#include <iostream>

int main() {
  int N, X;
  int A[10000];

  std::cin >> N >> X;

  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    if (A[i] < X)
      std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}
