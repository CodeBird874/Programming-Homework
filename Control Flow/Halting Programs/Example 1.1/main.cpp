#include <cstdlib>
#include <iostream>
void echohello() { std::cout << "Hi! \n"; }
void echobye() { std::cout << "Bye! \n"; }

int main() {
  echohello();

  std::exit(0); // std::exit exits the program, we sent 0, so it terminates
                // the program before echobye can do anything.
  echobye();
  return 0;
}
