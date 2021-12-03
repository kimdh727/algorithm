#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_N 123456

int main() {
  bool isPrime[MAX_N * 2 + 1];
  std::vector<int> primeArr;
  std::vector<int> ans;

  int n;

  for (int i = 2; i < MAX_N * 2 + 1; i++)
    isPrime[i] = true;

  for (int i = 2; i * i <= MAX_N * 2; i++)
    if (isPrime[i])
      for (int j = i * i; j <= MAX_N * 2; j += i)
        isPrime[j] = false;

  for (int i = 2; i <= MAX_N * 2; i++)
    if (isPrime[i])
      primeArr.push_back(i);

  while (true) {
    std::cin >> n;

    if (n == 0)
      break;

    auto min_b = std::upper_bound(primeArr.begin(), primeArr.end(), n);
    auto max_b = std::upper_bound(min_b, primeArr.end(), n * 2);
    ans.push_back(max_b - min_b);
  }

  for (auto i = ans.begin(); i != ans.end(); i++)
    printf("%d\n", *i);
}
