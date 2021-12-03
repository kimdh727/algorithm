#include <iostream>
#include <vector>


int main() {
  bool isPrime[1000001] = {0, };

  int M, N;
  std::vector<int> ans;

  std::cin >> M >> N;

  for (int i = 2; i <= N; i++)
    isPrime[i] = true;

  for (int i = 2; i * i <= N; i++)
    if (isPrime[i])
      for (int j = i * i; j <= N; j += i)
        isPrime[j] = false;

  for (int i = M; i <= N; i++)
    if (isPrime[i])
      ans.push_back(i);

  for (auto i: ans)
    printf("%d\n", i);
}
