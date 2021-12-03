#include <iostream>

int main() {
  int N, M, ans = 0;
  int *arr;

  std::cin >> N >> M;

  arr = new int[N];

  for (int i = 0; i < N; i++)
    std::cin >> arr[i];

  for (int i = 0; i < N - 2; i++) {
    for (int j = i + 1; j < N - 1; j++) {
      for (int k = j + 1; k < N; k++) {
        int sum = arr[i] + arr[j] + arr[k];
        if (sum <= M && sum > ans)
          ans = sum;
      }
    }
  }

  delete [] arr;

  std::cout << ans << std::endl;
}
