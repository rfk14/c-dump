#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "Exam Session SEEU:" << endl;
    cout << "1. January" << endl;
    cout << "2. April" << endl;
    cout << "3. June" << endl;
    cout << "4. September" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice 1-5: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Exams available in January: Exam 1, Exam 2" << endl;
    } else if (choice == 2) {
        cout << "Exams available in April: Exam 3, Exam 4" << endl;
    } else if (choice == 3) {
        cout << "Exams available in June: Exam 5, Exam 6" << endl;
    } else if (choice == 4) {
        cout << "Exams available in September: Exam G, Exam H" << endl;
    } else if (choice == 5) {
        cout << "Goodbye!" << endl;
    } else {
        cout << "Invalid choice. Please select a valid option (1-5)." << endl;
    }

    return 0;
}

