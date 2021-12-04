#include <iostream>
#include <vector>
#include <cmath>

int N, cnt;
int arr[20][20];
bool visit[20];
int min = 200;

void calc_stat() {
  int start = 0;
  int link = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (visit[i] && visit[j])
        start += arr[i][j];
      else if (!visit[i] && !visit[j])
        link += arr[i][j];
    }
  }

  if (min > abs(start - link))
    min = abs(start - link);
}

void back_tracking(const int n, const int init) {
  if (n == N / 2) {
    calc_stat();
  } else {
    for (int i = init; i < N; i++) {
      if (!visit[i]) {
        visit[i] = true;
        back_tracking(n + 1, i + 1);
        visit[i] = false;
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N;
  for (int i = N; i > N / 2; i--)

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      std::cin >> arr[i][j];

  visit[0] = true;
  back_tracking(1, 1);

  std::cout << min << std::endl;
}
