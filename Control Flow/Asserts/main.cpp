#include <cassert>
#include <iostream>
float printFloat() {
  float x;

  std::cout << "Enter positive float: \n";
  std::cin >> x;
  assert(x > 0.0);
  return x;
}
int main() {
  float y = printFloat();

  return 0;
}
