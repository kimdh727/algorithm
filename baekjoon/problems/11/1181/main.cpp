#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool order(std::string s1, std::string s2) {
  if (s1.length() == s2.length())
    return s1 < s2;
  return s1.length() < s2.length();
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N;

  std::cin >> N;
  std::vector<std::string> v(N);
  std::string cur_string = "";

  for (int i = 0; i < N; i++)
    std::cin >> v[i];

  std::sort(v.begin(), v.end(), order);

  for (auto i: v) {
    if (i.compare(cur_string)) {
      std::cout << i << std::endl;
      cur_string = i;
    }
  }
}
