#include <iostream>

int main() {
  int C, N, sum, cnt;
  int *arr;
  double avg;

  std::cin >> C;

  while (C--) {
    std::cin >> N;
    arr = new int[N];
    sum = 0;
    cnt = 0;
    for (int i=0; i<N; i++)
      std::cin >> arr[i];

    for (int i=0; i<N; i++)
      sum += arr[i];


    avg = (double)sum / N;

    for (int i=0; i<N; i++)
      if (arr[i] > avg)
        cnt++;

    delete arr;

    printf("%.3lf%%\n", (double)cnt / (double)N * 100);
  }
}
