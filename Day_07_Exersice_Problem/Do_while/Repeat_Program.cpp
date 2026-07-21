#include <iostream>
using namespace std;

int main() {

    int choice;

    do {

        cout << "\n===== MENU =====\n";
        cout << "1. Say Hello\n";
        cout << "2. Show Number\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Hello!";
                break;

            case 2:
                cout << "Number = 100";
                break;

            case 3:
                cout << "Goodbye!";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 3);

    return 0;
}