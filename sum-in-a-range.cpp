#include <iostream>
using namespace std;

int main() {
    int x, y, num, sum = 0, count = 0;

    // Input the range x and y
    cout << "Enter x, y (x should be less than or equal to y):" << endl;
    cin >> x >> y;

    // Input the first number (0 to end)
    cout << "Enter the first number (enter 0 to finish):" << endl;
    cin >> num;

    // Loop to input numbers and calculate sum within the range [x, y]
    while (num != 0) {
        if (num >= x && num <= y) {
            sum += num;  // Adding the number within the range to the sum
            count++;     // Counting the numbers within the range
        }
        // Ask for the next number (0 to end)
        cout << "Enter the next number (enter 0 to finish):" << endl;
        cin >> num;
    }

    // Output the sum of numbers within the range [x, y]
    cout << "Sum of numbers in the range [" << x << ", " << y << "] = " << sum << endl;

    // Output the average of the numbers within the range [x, y]
    if (count > 0) {
        cout << "Average is " << static_cast<double>(sum) / count << endl;
    } else {
        cout << "No numbers in the specified range." << endl;
    }

    // Pause the output before exiting (for some environments)
    system("PAUSE");
    return 0;
}

