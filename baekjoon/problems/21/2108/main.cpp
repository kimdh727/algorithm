#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int mean(std::vector<int> arr, int N) {
  int sum = 0;
  for (auto i: arr)
    sum += i;
  return std::round((double) sum / N);
}

int median(std::vector<int> arr, int N) {
  return arr[N / 2];
}

int mode(std::vector<int> arr) {
  std::vector<int> cnt(8001, 0);
  int res = 0;
  int max = 0;
  bool flag = false;

  for (auto i: arr)
    cnt[i + 4000]++;

  for (int i = 0; i < 8001; i++) {
    if (max < cnt[i]) {
      max = cnt[i];
      res = i - 4000;
      flag = true;
    } else if (max == cnt[i] && flag) {
      res = i - 4000;
      flag = false;
    }
  }

  return res;
}

int range(std::vector<int> arr, int N) {
  return arr[N - 1] - arr[0];
}

int main() {
  int N;

  std::cin >> N;

  std::vector<int> arr(N);

  for (int i = 0; i < N; i++)
    std::cin >> arr[i];

  std::sort(arr.begin(), arr.end());

  std::cout << mean(arr, N) << std::endl;
  std::cout << median(arr, N) << std::endl;
  std::cout << mode(arr) << std::endl;
  std::cout << range(arr, N) << std::endl;
}
