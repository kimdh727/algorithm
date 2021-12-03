#include <iostream>

/**
 * a_1 = 1
 *
 * a_n+1 = a_n + 1 + a_n
 * a_n+1 = 2 * a_n + 1
 * a_n+1 + 1 = 2 * (a_n + 1)
 *
 * if) b_n = a_n + 1
 *
 * b_n+1 = 2 * b_n
 *
 * b_1 = 2
 *
 * b_n = 2 ^ n
 *
 * ∴ a_n = 2 ^ n - 1
 */
void hanoiK(int n) {
  std::cout << (1 << n) - 1 << std::endl;
}

void hanoi(int n, int start, int temp, int dest) {
  if (n == 1) {
    printf("%d %d\n", start, dest);   // move 1 start to dset
  } else {
    hanoi(n - 1, start, dest, temp);  // move (1 .. n - 1) start to temp
    printf("%d %d\n", start, dest);   // move n start to dest
    hanoi(n - 1, temp, start, dest);  // move (1 .. n - 1) temp to dest
  }
}

int main() {
  int N;

  std::cin >> N;

  hanoiK(N);
  hanoi(N, 1, 2, 3);
}
