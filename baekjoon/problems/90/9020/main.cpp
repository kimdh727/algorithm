#include <iostream>
#include <vector>

#define PRIME_RANGE 10000

int main() {
  bool isPrime[PRIME_RANGE + 1] = {false, false, };
  std::vector<std::pair<int, int>> ans;

  int T, n;

  for (int i = 2; i <= PRIME_RANGE; i++)
    isPrime[i] = true;

  for (int i = 2; i * i <= PRIME_RANGE; i++)
    if (isPrime[i])
      for (int j = i * i; j <= PRIME_RANGE; j += i)
        isPrime[j] = false;

  std::cin >> T;

  while (T--) {
    std::cin >> n;

    for (int i = 0; i < n / 2; i++) {
      if (isPrime[n / 2 - i] && isPrime[n / 2 + i]) {
        ans.push_back(std::make_pair(n / 2 - i, n / 2 + i));
        break;
      }
    }
  }

  for (auto i: ans)
    printf("%d %d\n", i.first, i.second);
}
