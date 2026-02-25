#include <cstdlib>
#include <iostream>
void echohello() { std::cout << "Hi! \n"; }
void echobye() { std::cout << "Bye! \n"; }

int main() {
  echohello();
  std::abort(); // std::abort exits the program but it is used for situations
                // where abnormal behavior occurs.
  echobye();
  return 0;
}
