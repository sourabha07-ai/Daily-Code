#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid Input!" << endl;
        return 0;
    }

    switch (marks / 10) {
        case 10:
        case 9:
            cout << "Grade A" << endl;
            break;

        case 8:
            cout << "Grade B" << endl;
            break;

        case 7:
            cout << "Grade C" << endl;
            break;

        case 6:
            cout << "Grade D" << endl;
            break;

        default:
            cout << "Grade F" << endl;
    }

    return 0;
}