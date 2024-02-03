#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the angles of the triangle" << endl;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b + c == 180) {
        cout << "A triangle can be formed." << endl;
        
        if (a == 90 || b == 90 || c == 90) {
            cout << "The triangle is a right-angled triangle." << endl;
        } else {
            cout << "The triangle is not a right-angled triangle." << endl;
        }
    } else {
        cout << "A triangle cannot be formed with the given angles." << endl;
    }

    return 0;
}

