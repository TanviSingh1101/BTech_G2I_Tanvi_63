#include<iostream>
#include <cstdlib>  
#include <ctime>     
#include <limits>   

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "=== Number Guessing Game ===\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Can you guess it?\n";

    while (true) {
        cout << "Enter your guess: ";
        if (!(cin >> guess)) {
            cout << "Invalid input! Please enter an integer.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue;
        }

        attempts++;

        if (guess < 1 || guess > 100) {
            cout << "Please guess a number between 1 and 100.\n";
            continue;
        }

        if (guess == secretNumber) {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }
    }

    return 0;
}