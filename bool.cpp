#include <iostream>

using namespace std;

int main() {
    // Declare a bool variable
    bool isRaining;
    cout<<"put 0 or 1 \n";
    cin>>isRaining;

    // Use the bool variable in a condition
    if (isRaining) {
        cout << "Grab an umbrella!" << endl;
    } else {
        cout << "No need for an umbrella." << endl;
    }

    return 0;
}

