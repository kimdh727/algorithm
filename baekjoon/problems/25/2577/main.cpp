#include <iostream>

int main() {
  int A, B, C;
  int mul;
  int ans[10] = {0, };

  std::cin >> A >> B >> C;
  mul = A * B * C;

  while (mul) {
    int n = mul % 10;
    ans[n]++;
    mul /= 10;
  }

  for (int i=0; i<10; i++) {
    std::cout << ans[i] << std::endl;
  }
}
