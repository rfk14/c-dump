#include <iostream>
using namespace std;

int main() {
    int x, y, n;

    cout << "Enter the starting value (x): ";
    cin >> x;

    cout << "Enter the ending value (y): ";
    cin >> y;

    cout << "Enter the number to check in the range: ";
    cin >> n;

    if (n >= x && n <= y) {
        cout << n << " is within the range [" << x << ", " << y << "]." << endl;
    } else {
        cout << n << " is NOT within the range [" << x << ", " << y << "]." << endl;
    }

    return 0;
}

