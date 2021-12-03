#include <iostream>
#include <vector>

int main() {
  int N, x, y;

  std::cin >> N;
  std::vector<std::pair<int, int>> persons;

  for (int i = 0; i < N; i++) {
    std::cin >> x >> y;
    persons.push_back(std::make_pair(x, y));
  }

  for (auto i: persons) {
    int rank = 1;

    for (auto j: persons)
      if (j.first > i.first && j.second > i.second)
        rank++;

    std::cout << rank << " ";
  }
  std::cout << std::endl;
}
