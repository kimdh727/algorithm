#include <iostream>

int main() {
  int N, res = 665;

  std::cin >> N;

  while (N) {
    res++;
    if ((int)std::to_string(res).find("666") != -1)
      N--;
  }

  std::cout << res << std::endl;
}
