#include <iostream>
#include <string>

int main() {
  std::string str;
  int arr[26];

  std::cin >> str;

  for (int i=0; i<26; i++)
    arr[i] = -1;

  for (std::string::iterator it = str.begin(); it != str.end(); it++)
    if (arr[*it - 'a'] == -1)
      arr[*it - 'a'] = (it - str.begin());

  for (int i=0; i<26; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}
