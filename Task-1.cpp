// Number Guessing Game
#include <iostream>
using namespace std;
int main() {
    int secretNumber = 95;
    int guess;
    cout << "Guess the number:" << endl;
    do {
        cout << "Enter your guess number: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
