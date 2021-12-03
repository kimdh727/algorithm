#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

  int N;

  std::cin >> N;
  std::vector<int> arr(N);

  for (int i = 0; i < N; i++)
    std::cin >> arr[i];

  std::sort(arr.begin(), arr.end());

  for (auto i: arr)
    std::cout << i << "\n";
}
