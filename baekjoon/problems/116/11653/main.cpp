#include <iostream>
#include <vector>

int main() {
  int N;
  std::vector<int> ans;

  std::cin >> N;

  for (int i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      N /= i;
      ans.push_back(i);
    }
  }

  if (N != 1)
    ans.push_back(N);

  for (int i : ans)
    printf("%d\n", i);
}
