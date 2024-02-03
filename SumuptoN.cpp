#include <iostream>

using namespace std;

// Function to calculate the sum of numbers from 1 to n
int sumUpToN(int n) {
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    // Example usage
    int n = 5;
    int result = sumUpToN(n);

    cout << "The sum of numbers from 1 to " << n << " is: " << result << endl;

    return 0;
}

