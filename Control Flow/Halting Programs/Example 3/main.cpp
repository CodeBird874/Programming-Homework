#include <cstdlib>
#include <iostream>
void echohello() { std::cout << "Hi! \n"; }
void echobye() { std::cout << "Bye! \n"; }

void echoexit() { std::cout << "exiting.... \n"; }

int main() {
  // std::atexit is used for executing commands (like cleanup) before exit is
  // called.
  std::atexit(echoexit);
  echohello();
  std::exit(0);
  echobye();
  return 0;
}
