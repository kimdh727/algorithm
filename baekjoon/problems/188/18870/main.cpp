#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N;

  std::cin >> N;

  std::vector<int> x(N);

  for (int i = 0; i < N; i++)
    std::cin >> x[i];

  std::vector<int> x_sort = x;
  std::sort(x_sort.begin(), x_sort.end());
  x_sort.erase(unique(x_sort.begin(), x_sort.end()), x_sort.end());

  for (int i = 0; i < N; i++)
    std::cout << lower_bound(x_sort.begin(), x_sort.end(), x[i]) - x_sort.begin() << " ";
  std::cout << std::endl;
}
