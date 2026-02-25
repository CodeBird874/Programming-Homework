#include <iostream>
#include <string>
int main() {
  std::string input;
  do {
    std::cout
        << "This program will only close if you enter I love burgers!! \n";
    std::getline(std::cin, input);
  } while (input != "I love burgers!!");

  return 0;
}
