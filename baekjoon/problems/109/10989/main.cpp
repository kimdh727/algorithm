#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N, num;

  std::cin >> N;
  std::vector<int> arr(10000, 0);

  for (int i = 0; i < N; i++) {
    std::cin >> num;
    arr[num - 1]++;
  }

  for (int i = 0; i < 10000; i++)
    for (int j = 0; j < arr[i]; j++)
      std::cout << i + 1 << "\n";
}
