#include <iostream>

int main() {
  int t, cnt = 0;
  bool arr[42] = {false, };

  for (int i=0; i<10; i++) {
    std::cin >> t;
    arr[t % 42] = true;
  }

  for (int i=0; i<42; i++)
    if (arr[i]) cnt++;

  std::cout << cnt << std::endl;
}
