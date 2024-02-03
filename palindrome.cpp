#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    int len, i;
    
    cout << "Enter a string: ";
    cin >> str;

    len = str.length();

    int j = len - 1;
    bool isPalindrome = true;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        j--;
    }

    if (isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}

