#include <iostream>

using namespace std;

int main() {
    char inputChar;
    
    cout << "Enter a character: ";
    cin >> inputChar;

    // Check if the input is a lowercase letter
    if (inputChar >= 'a' && inputChar < 'z') {
        inputChar = inputChar + 1;
    }
    // Check if the input is an uppercase letter
    else if (inputChar >= 'A' && inputChar < 'Z') {
        inputChar = inputChar + 1;
    }
    // Handling the case when the input is 'z' or 'Z'
    else if (inputChar == 'z' || inputChar == 'Z') {
        inputChar = inputChar - 25; // Loop back to 'a' or 'A'
    }
    
    cout << "The next character is: " << inputChar << endl;

    return 0;
}

