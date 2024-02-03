#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, greatest_divisor, min, count = 0;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;

    // Finding the minimum value between a and b
    if (a > b)
        min = b;
    else
        min = a;

    // Finding the greatest common divisor (GCD) and counting the common divisors
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            greatest_divisor = i;
            count++;
        }
    }

    // Outputting the greatest common divisor and the number of common divisors
    cout << "The greatest common divisor is: " << greatest_divisor << endl
         << "Number of common divisors: " << count << endl;

    cin.get();
    cin.get();
    return 0;
}

