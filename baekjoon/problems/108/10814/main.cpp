#include <iostream>
#include <vector>
#include <string>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N;

  std::cin >> N;
  std::vector<std::string> v[200];

  for (int i = 0; i < N; i++) {
    int age;
    std::string name;

    std::cin >> age >> name;
    v[age - 1].push_back(name);
  }

  for (int i = 0; i < 200; i++) {
    for (auto a: v[i])
      std::cout << i + 1 << " " << a << "\n";
  }
}
