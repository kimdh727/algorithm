#include <iostream>

int main() {
  int n, cnt, sum;
  std::cin >> n;

  std::string str;

  while (n--) {
    std::cin >> str;
    cnt = 0;
    sum = 0;
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
      if (*it == 'O')
        cnt++;
      else
        cnt = 0;

      sum += cnt;
    }
    std::cout << sum << std::endl;
  }
}
