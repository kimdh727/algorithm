#include <iostream>
#include <string>

int croatia(std::string str) {
  if (str.substr(0, 2) == "c=")
    return 2;

  if (str.substr(0, 2) == "c-")
    return 2;

  if (str.substr(0, 3) == "dz=")
    return 3;

  if (str.substr(0, 2) == "d-")
    return 2;

  if (str.substr(0, 2) == "lj")
    return 2;

  if (str.substr(0, 2) == "nj")
    return 2;

  if (str.substr(0, 2) == "s=")
    return 2;

  if (str.substr(0, 2) == "z=")
    return 2;

  return 1;
}

int main() {
  std::string str = "a";
  int cnt = 0;

  std::cin >> str;

  for (int i = 0; i < (int)str.length(); i++) {
    i += croatia(str.substr(i, str.length() - i)) - 1;
    cnt++;
  }

  std::cout << cnt << std::endl;
}
