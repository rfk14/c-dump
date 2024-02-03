#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int random_number = (rand() % 10 + 1);
    int given_number;

    while (true) {
        cout << "Please enter a number between 1 - 10: ";
        cin >> given_number;

        if (given_number == random_number) {
            cout << "Congratulations! You guessed the correct number.\n";
            break;
        } else {
            cout << "Try again.\n";
        }
    }

    return 0;
}


