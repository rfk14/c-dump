#include <iostream>

using namespace std;

// Function to check if a number is even
bool isEven(int number) {
    return (number % 2 == 0);
}

// Function to print the result of isEven
void printResult(int number) {
    bool isNumberEven = isEven(number);

    if (isNumberEven) {
        cout << "The number " << number << " is even." << endl;
    } else {
        cout << "The number " << number << " is odd." << endl;
    }
}

// Example usage
int main() {
    int numberToCheck = 7;
    printResult(numberToCheck);

    return 0;
}

