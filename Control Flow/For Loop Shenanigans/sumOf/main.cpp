#include <iostream>

void sumTo(int value) {
  int output = 0;
  for (int i = 0; i <= value; i++) {
    output = output + i;
  }
  std::cout << output << '\n';
}

int main() { sumTo(5); }
