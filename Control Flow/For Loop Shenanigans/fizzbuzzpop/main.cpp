#include <iostream>
// code could be better, but it works!
void fizzbuzzpop(int num) {
  for (int i = 0; i <= num; i++) {
    if (i % 5 == 0 && i % 3 == 0 && i > 0) {
      std::cout << "fizzbuzz \n";
    }
    if (i % 3 == 0 && i > 0 && i % 5 != 0) {
      std::cout << "fizz \n";
    }
    if (i % 5 == 0 && i > 0) {
      std::cout << "buzz \n";
    }
    if (i % 7 == 0 && i > 0) {
      std::cout << "pop \n";
    }
    if (i % 5 != 0 && i % 3 != 0 && i % 7 != 0 && i > 0) {
      std::cout << i << "\n";
    }
  }
}
int main() { fizzbuzzpop(150); }
