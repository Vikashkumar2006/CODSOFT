#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(std::time(0));
    
    //For generating a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Too low. Try again: ";
        } else if (userGuess > randomNumber) {
            cout << "Too high. Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number." <<endl;
            break;
        }
    }

    return 0;
}
