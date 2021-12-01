#include <iostream>

int d (int n) {
  int res = n;

  while (n) {
    res += (n % 10);
    n /= 10;
  }

  return res;
}

int main() {
  int arr[10001] = {0, };

  for (int i=0; i<10001; i++) {
    int dn = d(i);
    if (dn < 10001)
      arr[dn]++;
  }

  for (int i=1; i<10001; i++) {
    if (arr[i] == 0)
      std::cout << i << std::endl;
  }
}
