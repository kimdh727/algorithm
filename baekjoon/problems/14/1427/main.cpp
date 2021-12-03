#include <iostream>
#include <vector>
#include <algorithm>

bool order(int a, int b) {
  return a > b;
}

int main() {
  int N;
  std::vector<int> arr;

  std::cin >> N;

  while (N) {
    arr.push_back(N % 10);
    N /= 10;
  }

  std::sort(arr.begin(), arr.end(), order);

  for (auto i: arr)
    std::cout << i;
  std::cout << std::endl;
}
