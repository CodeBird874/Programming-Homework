// My Answer to learncpp.com's 9.x quiz.
#include "Random.h"
#include <iostream>

void ignoreLine() {

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void printUnexpectedInput() {

  std::cout << "Please enter a number between 1 and 100. \n";
}
int getInput() {
  int input;
  std::cin >> input;
  if (std::cin.fail()) {
    printUnexpectedInput();
    std::cin.clear();
    ignoreLine();
  }
  ignoreLine();
  return input;
}

bool validateInput(int input) {
  if (input > 100 || input < 1) {
    printUnexpectedInput();
    return false;
  }
  return true;
}

void startGame() {
  int num = Random::get(1, 100);
  int input = 0;
  int guesses = 7;
  bool gameOver = false;
  char answer;
  bool hasWon = false;
  bool invalidInput = false;
  std::cout << "Let's play Hi-Lo, I'm thinking of a number between 1 and 100, "
               "what is it? (You have 7 guesses) \n";

  while (!gameOver) {

    if (guesses == 0) {
      gameOver = true;
      std::cout << "Sorry, the number was:" << num << "\n";
      break;
    } else {
      std::cout << "Guess #" << guesses << "\n";
    }

    if (!hasWon) {
      input = getInput();
    }

    if (!validateInput(input)) {
      input = getInput();
    }
    if (input > num) {
      guesses--;
      std::cout << "Guess was too high! " << guesses
                << " guesses remaining. \n";
    }
    if (input < num) {
      guesses--;
      std::cout << "Guess was too low! " << guesses << " guesses remaining. \n";
    }
    if (input == num) {
      std::cout << "You win! \n";
      hasWon = true;
      gameOver = true;
    }
  }

  while (gameOver) {
    std::cout << "would you like to play again? (y/n) \n";
    std::cin >> answer;
    switch (answer) {

    case 'n':
      std::cout << "Okay, see ya later! \n";
      break;
    case 'y':
      startGame();
      break;
    }
  }
}
int main() {
  startGame();
  return 0;
}
