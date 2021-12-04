#include <iostream>
#include <string>

int main() {
  int N, M, min = 64;
  std::string *board;

  std::cin >> N >> M;

  board = new std::string[N];

  for (int i = 0; i < N; i++)
    std::cin >> board[i];

  for (int r = 0; r <= N - 8; r++) {
    for (int c = 0; c <= M - 8; c++) {
      int cnt = 0;

      for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
          if ((i + j) % 2 == 0 && board[r + i][c + j] == 'B')
            cnt++;
          else if ((i + j) % 2 == 1 && board[r + i][c + j] == 'W')
            cnt++;
        }
      }

      cnt = (cnt < 32 ? cnt : 64 - cnt);
      if (min > cnt)
        min = cnt;
    }
  }

  delete [] board;

  std::cout << min << std::endl;
}
