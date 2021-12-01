#include <iostream>

int main() {
  int N, cnt = 0;
  int res;

  std::cin >> N;
  res = N;

  while (N != res || cnt == 0) {
    res = ((res % 10) * 10) + (((res / 10) + (res % 10)) % 10);
    cnt++;
  }

  std::cout << cnt << std::endl;
}
