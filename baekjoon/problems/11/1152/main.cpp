#include <iostream>

int main() {
  int cnt = 1;
  int index = 0;
  char str[1000001];

  std::cin.getline(str, 1000001);

  while (str[index] != 0) {
    if (str[index] == ' ')
      cnt++;

    index++;
  }

  if (str[0] == ' ')
    cnt--;

  if (str[index-1] == ' ')
    cnt--;

  std::cout << cnt << std::endl;
}
