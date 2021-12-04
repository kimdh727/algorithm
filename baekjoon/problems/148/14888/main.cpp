#include <iostream>
#include <vector>

int N, op_list[4];
int *arr, *op_arr;
std::vector<int> v;

void calc_op() {
  int n = arr[0];

  for (int i = 0; i < N - 1; i++) {
    switch (op_arr[i]) {
      case 1:
        n += arr[i + 1]; break;
      case 2:
        n -= arr[i + 1]; break;
      case 3:
        n *= arr[i + 1]; break;
      case 4:
        n /= arr[i + 1]; break;
      default:
        break;
    }
  }

  v.push_back(n);
}

void back_tracking(const int n) {
  if (n == N - 1) {
    calc_op();
  } else {
    for (int i = 0; i < 4; i++) {
      if (op_list[i]) {
        op_list[i]--;
        op_arr[n] = i + 1;
        back_tracking(n + 1);
        op_arr[n] = 0;
        op_list[i]++;
      }
    }
  }
}

int main() {
  int min = INT32_MAX, max = INT32_MIN;

  std::cin >> N;

  arr = new int[N];
  op_arr = new int[N - 1];

  for (int i = 0; i < N; i++)
    std::cin >> arr[i];

  for (int i = 0; i < 4; i++)
    std::cin >> op_list[i];

  back_tracking(0);

  for (auto i: v) {
    if (i < min)
      min = i;
    if (i > max)
      max = i;
  }

  delete [] arr;
  delete [] op_arr;

  std::cout << max << "\n" << min << "\n";
}
