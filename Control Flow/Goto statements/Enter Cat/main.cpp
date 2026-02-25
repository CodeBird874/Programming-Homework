#include <iostream>
#include <string>

int main() {
  std::string input;
  int incorrect_inputs = 0;
init:
  std::cout << "Please enter cat. \n";
  std::getline(std::cin, input);

  if (input != "cat") {
    if (incorrect_inputs == 10) {
      std::cout << "Why are you doing this? Just enter cat! \n";
    } else {
      std::cout << "That was not what i said enter. \n";
    }

    incorrect_inputs++;
    goto init;
  }
}
