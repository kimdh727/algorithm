#include <iostream>
#include <vector>
#include <algorithm>

bool order(std::pair<int, int> p1, std::pair<int, int> p2) {
  return p1.first == p2.first ? p1.second < p2.second : p1.first < p2.first;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N;

  std::cin >> N;

  std::vector<std::pair<int, int>> v(N);

  for (int i = 0; i < N; i++)
    std::cin >> v[i].first >> v[i].second;

  std::sort(v.begin(), v.end(), order);

  for (auto i: v)
    printf("%d %d\n", i.first, i.second);
}
