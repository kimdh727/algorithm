#include <iostream>
#include <string>

int main() {
  int T, R;
  std::string S;

  std::cin >> T;

  while (T--) {
    std::cin >> R >> S;

    for (std::string::iterator it = S.begin(); it != S.end(); it++) {
      for (int i=0; i<R; i++)
        std::cout << *it;
    }
    std::cout << std::endl;
  }
}
