#include <iostream>
#include <string>

int main() {
  int arr[26] = {0, };
  int max = 0, cnt = 0, index;

  std::string str;

  std::cin >> str;

  for (std::string::iterator it = str.begin(); it != str.end(); it++) {
    if (*it >= 'A' && *it <= 'Z')
      arr[*it - 'A']++;
    else if (*it >= 'a' && *it <= 'z')
      arr[*it - 'a']++;
  }

  for (int i=0; i<26; i++)
    if (arr[i] > max)
      max = arr[i];

  for (int i=0; i<26; i++) {
    if (arr[i] == max) {
      cnt++;
      index = i;
    }
  }

  if (cnt == 1)
    std::cout << (char)(index + 'A') << std::endl;
  else
    std::cout << '?' << std::endl;
}
