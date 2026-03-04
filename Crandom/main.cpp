#include <iostream>

unsigned int crandom() {
  static unsigned int seed = 0;
  seed = 359779 * seed + 5858;
  return seed % 437956937953799753;
}

int main() {
  for (int i = 0; i < 100; i++) {
    if (i < 100) {
      std::cout << crandom() << "\n";
    }
  }
}
