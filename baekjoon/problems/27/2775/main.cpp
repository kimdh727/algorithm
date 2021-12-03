#include <iostream>

int main() {
  int T, k, n;
  int arr[14];

  std::cin >> T;

  while (T--) {
    std::cin >> k >> n;

    for (int i = 0; i <= k; i++) {
      for (int j = n-1; j >= 0; j--) {
        if (i == 0)
          arr[j] = j+1;
        else {
          for (int a = 0; a < j; a++)
            arr[j] += arr[a];
        }
      }
    }

    std::cout << arr[n-1] << std::endl;
  }
}
