#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GuessTheNumber {
private:
    int number;
    int attempts;

public:
    GuessTheNumber() {
        srand(time(0));
        number = rand() % 100 + 1;
        attempts = 0;
    }

    void play() {
        int guess;
        cout << "Welcome to the guess the number game! Try to guess the number between 1 and 100.\n";

        while (true) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess < number) {
                cout << "The number you entered is too small! Try again.\n";
            } else if (guess > number) {
                cout << "The number you entered is too large! Try again.\n";
            } else {
                cout << "Congrats! You guessed the correct number(" << number << ") in " << attempts << " Attempts.\n";
                break;
            }
        }
    }
};

int main() {
    GuessTheNumber game;
    game.play();
    return 0;
}
