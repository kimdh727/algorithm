#include <iostream>

int N, M;
int arr[7];

void back_tracking(const int cnt) {
  if (cnt == M) {
    for (int i = 0; i < M; i++)
      std::cout << arr[i] << " ";
    std::cout << "\n";
  } else {
    for (int i = 0; i < N; i++) {
      arr[cnt] = i + 1;
      back_tracking(cnt + 1);
    }
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N >> M;

  back_tracking(0);
}
