#include <iostream>

#define STAR_MAP_MAX (3 * 3 * 3 * 3 * 3 * 3 * 3 + 1)

char star_map[STAR_MAP_MAX][STAR_MAP_MAX];

void init_star(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      star_map[i][j] = ' ';
    }
    star_map[i][n] = '\0';
  }
}

void make_star(int n, int r, int c) {
  if (n == 1)
    star_map[r][c] = '*';
  else
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        if (!(i == 1 && j == 1))
          make_star(n / 3, r + i * n / 3, c + j * n / 3);
}

void print_star(int n) {
  for (int i = 0; i < n; i++) {
    std::cout << star_map[i] << std::endl;
  }
}

int main() {
  int N;

  std::cin >> N;

  init_star(N);
  make_star(N, 0, 0);
  print_star(N);
}
