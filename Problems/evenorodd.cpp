#include <iostream>
#include <string>

std::string evenOrOdd(int num) {
  if (num % 2 == 0 && num > 0) {
    return "Even";

  } else {
    return "Odd";
  }
}

int main() {
  std::cout << evenOrOdd(1);
  return 0;
}
