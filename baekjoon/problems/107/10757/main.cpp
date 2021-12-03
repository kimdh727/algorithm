#include <iostream>
#include <string>

int main() {
  std::string A, B, X;
  int carry = 0;

  std::cin >> A >> B;

  if (A.length() > B.length())
    swap(A, B);

  for (int i = 0; i < (int)B.length(); i++) {
    int a, b, sum;
    a = i < (int)A.length() ? A[A.length() - i - 1] - '0' : 0;
    b = B[B.length() - i - 1] - '0';

    sum = a + b + carry;

    if (sum >= 10) {
      carry = 1;
      X = char(sum - 10 + '0') + X;
    } else {
      carry = 0;
      X = char(sum + '0') + X;
    }
  }

  if (carry)
    X = '1' + X;

  std::cout << X << std::endl;
}
