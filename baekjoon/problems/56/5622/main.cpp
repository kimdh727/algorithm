#include <iostream>
#include <string>

int main() {
  std::string str;
  int cnt = 0;

  std::cin >> str;

  for (std::string::iterator it = str.begin(); it != str.end(); it++) {
    if (*it == 'A' || *it == 'B' || *it == 'C')
      cnt += 3;
    else if (*it == 'D' || *it == 'E' || *it == 'F')
      cnt += 4;
    else if (*it == 'G' || *it == 'H' || *it == 'I')
      cnt += 5;
    else if (*it == 'J' || *it == 'K' || *it == 'L')
      cnt += 6;
    else if (*it == 'M' || *it == 'N' || *it == 'O')
      cnt += 7;
    else if (*it == 'P' || *it == 'Q' || *it == 'R' || *it == 'S')
      cnt += 8;
    else if (*it == 'T' || *it == 'U' || *it == 'V')
      cnt += 9;
    else if (*it == 'W' || *it == 'X' || *it == 'Y' || *it == 'Z')
      cnt += 10;
  }

  std::cout << cnt << std::endl;
}
