#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int guess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to Guess the Number!\n";
    std::cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    // Game loop
    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        numberOfTries++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfTries << " tries.\n";
        }
    }

    return 0;
}

