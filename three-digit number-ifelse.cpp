#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Enter a three-digit number: ";
    cin >> n;
    
    if (n >= 100 && n <= 999) {
        int digit1 = n / 100;
        int digit2 = (n / 10) % 10;
        int digit3 = n % 10;
        
        if (n == (digit1 * digit1 * digit2 * digit2 * digit3 * digit3)) {
            cout << "The number " << n << " is equal to the product of the squares of its digits." << endl;
        } else {
            cout << "The number " << n << " is not equal to the product of the squares of its digits." << endl;
        }
    } else {
        cout << "Please enter a valid three-digit number." << endl;
    }
    
    return 0;
}

