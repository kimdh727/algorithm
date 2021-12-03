#include <iostream>

int main() {
  int X;
  int i = 1, j = 1;

  std::cin >> X;

  while (i < X)
    i += ++j;

  if (j % 2 == 0)
    std::cout << j - (i - X) << "/" << (i - X) + 1 << std::endl;
  else
    std::cout << (i - X) + 1 << "/" << j - (i - X) << std::endl;
}
