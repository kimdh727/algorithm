#include <iostream>

int main() {
  int x, y, w, h;
  int min = 1000;

  std::cin >> x >> y >> w >> h;

  int arr[4] = {x, y, w - x, h - y};

  for (auto i : arr)
    if (min > i)
      min = i;

  std::cout << min;
}
