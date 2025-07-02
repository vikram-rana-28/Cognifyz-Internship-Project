#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    do {
        cout << "Guess a number (1-100): ";
        cin >> guess;

        if (guess > number)
            cout << "Too high! Try again.\n";
        else if (guess < number)
            cout << "Too low! Try again.\n";
        else
            cout << "Congratulations! You guessed it right.\n";

    } while (guess != number);

    return 0;
}
