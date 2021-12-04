#include <iostream>

int N, M;
bool visit[8];
int arr[8];

void back_tracking(const int cnt, const int init) {
  if (cnt == M) {
    for (int i = 0; i < M; i++)
      std::cout << arr[i] << " ";
    std::cout << "\n";
  } else {
    for (int i = init; i < N; i++) {
      if (!visit[i]) {
        arr[cnt] = i + 1;
        visit[i] = true;
        back_tracking(cnt + 1, i);
        visit[i] = false;
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N >> M;

  back_tracking(0, 0);
}
