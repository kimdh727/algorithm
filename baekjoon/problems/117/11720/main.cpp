#include <iostream>
#include <string>

int main() {
  int N, sum = 0;
  std::string str;

  std::cin >> N >> str;

  for (std::string::iterator it = str.begin(); it != str.end(); it++)
    sum += *it - '0';

  std::cout << sum << std::endl;
}
