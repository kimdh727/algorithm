#include <iostream>
#include <string>

int main() {
  int N, cnt = 0;
  std::string str;

  std::cin >> N;

  while (N--) {
    int checker[26] = {0, };
    bool res = true;

    std::cin >> str;

    for (int i=0; i < (int)str.length(); i++) {
      if (checker[str[i] - 'a'] == 0) {
        checker[str[i] - 'a'] = 1;
        char temp = str[i];
        while (str[i + 1] == temp)
          i++;
      }
      else {
        res = false;
        break;
      }
    }

    if (res)
      cnt++;
  }

  std::cout << cnt << std::endl;
}
