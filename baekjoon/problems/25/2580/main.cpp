#include <iostream>
#include <vector>

#define SUDOKU_N 3

int sudoku[SUDOKU_N * SUDOKU_N][SUDOKU_N * SUDOKU_N];

std::vector<std::pair<int, int>> v;

void sudoku_print() {
  for (int i = 0; i < SUDOKU_N * SUDOKU_N; i++) {
    for (int j = 0; j < SUDOKU_N * SUDOKU_N; j++)
      std::cout << sudoku[i][j] << " ";
    std::cout << "\n";
  }
}

bool sudoku_check(const int n, const int num) {
  int r = v[n].first;
  int c = v[n].second;

  for (int i = 0; i < SUDOKU_N * SUDOKU_N; i++) {
    if (num == sudoku[r][i])
      return false;
    if (num == sudoku[i][c])
      return false;
  }

  for (int i = (r / SUDOKU_N) * SUDOKU_N; i < (r / SUDOKU_N) * SUDOKU_N + SUDOKU_N; i++)
    for (int j = (c / SUDOKU_N) * SUDOKU_N; j < (c / SUDOKU_N) * SUDOKU_N + SUDOKU_N; j++)
      if (num == sudoku[i][j])
        return false;

  return true;
}

void sudoku_fill(const int n) {
  if (n == (int)v.size()) {
    sudoku_print();
    exit(0);
  } else {
    for (int i = 1; i <= SUDOKU_N * SUDOKU_N; i++) {
      if (sudoku_check(n, i)) {
        sudoku[v[n].first][v[n].second] = i;
        sudoku_fill(n + 1);
        sudoku[v[n].first][v[n].second] = 0;
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  for (int i = 0; i < SUDOKU_N * SUDOKU_N; i++) {
    for (int j = 0; j < SUDOKU_N * SUDOKU_N; j++) {
      std::cin >> sudoku[i][j];
      if (sudoku[i][j] == 0)
        v.push_back(std::make_pair(i, j));
    }
  }

  sudoku_fill(0);
}
