#include <iostream>

#include <cstdlib>

#include <ctime>
using namespace std;

int main() {
    
    

    srand(time(0)); 
    int secretNumber = rand() % 5 + 1; 
    
    
    int guess;
    int attempts = 0;
    cout<<"\x1b[31m";
    cout << "Welcome to the Guessing Game!" << endl;

    cout << "I'm thinking of a number between 1 and 5." << endl;

    do {
        cout<<"\x1b[34m";
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "\x1b[33m"<<"Too low! Try again." << endl<<"\x1b[33m";
        } else if (guess > secretNumber) {
            cout << "\x1b[33m"<<"Too high! Try again." << endl<<"\x1b[33m";
        } else {
            cout << "\x1b[31m"<< "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl<< "\x1b[31m";
        }
    } while (guess != secretNumber);
    
    cout<<"\x1b[34m";
    return 0;
}