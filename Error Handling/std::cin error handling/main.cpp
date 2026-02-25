#include <iostream>
#include <limits>
void ignoreExtraChars() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
char getChar() {
  char x;
  std::cin >> x;
  ignoreExtraChars();
  return x;
}
void printHappyDays() { std::cout << "Happy Days! \n"; }
int main() {
  std::cout << "This program only takes in a, e, i, o, u. \n";
  bool validInput = false;
  char input = getChar();
  while (!validInput) {

    switch (input) {
    case 'a':
      printHappyDays();
      validInput = true;
      break;
    case 'e':
      printHappyDays();
      validInput = true;
      break;
    case 'i':
      printHappyDays();
      validInput = true;
      break;
    case 'o':
      printHappyDays();
      validInput = true;
      break;
    case 'u':
      printHappyDays();
      validInput = true;
      break;
    default:
      std::cout << "This program only takes in a, e, i, o u. \n";
      input = getChar();
      break;
    }
  }
}
