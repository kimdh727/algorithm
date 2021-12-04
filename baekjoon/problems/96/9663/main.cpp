#include <iostream>
#include <cmath>

int N;
int cnt;
int row[15];

/**
 * @brief
 * check (n + 1, c)
 * for (int i = 0; i < n; i++)
 *   with (i + 1, row[i])
 *   if c == row[i]: false
 *   if abs((n + 1) - (i + 1)) == abs(c - row[i]): false
 *
 * @param n row number
 * @param c col number
 * @return true   can't attack
 * @return false  can   attack
 */
bool n_queen_check(const int n, const int c) {
  for (int i = 0; i < n; i++) {
    if (c == row[i])
      return false;
    if (abs((n + 1) - (i + 1)) == abs(c - row[i]))
      return false;
  }

  return true;
}

void n_queen(const int n) {
  if (n == N) {
    cnt++;
  } else {
    for (int i = 1; i <= N; i++) {
      if (n_queen_check(n, i)) {
        row[n] = i;
        n_queen(n + 1);
        row[n] = 0;
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N;

  n_queen(0);

  std::cout << cnt << std::endl;
}
