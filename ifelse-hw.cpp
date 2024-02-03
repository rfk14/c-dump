#include <iostream>

using namespace std;

int main() {
    int birthYear;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    int age = 2021 - birthYear;

    cout << "Your age is: " << age << " years." << endl;

    if (age % 2 == 0) {
        cout << "Your age is an even number." << endl;
    } else {
        cout << "Your age is an odd number." << endl;
    }

    return 0;
}

