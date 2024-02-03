#include <iostream>
using namespace std;

int main() {
    char c;
    for (int i = 0; i <= 255; i++) {
        c = i;
        cout << "\n Character: " << c << "\t ASCII: " << i << endl;
    }
    system("PAUSE");
    return 0;
}

