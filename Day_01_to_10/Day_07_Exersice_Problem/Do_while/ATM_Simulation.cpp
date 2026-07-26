#include <iostream>
#include <limits>
using namespace std;

int main() {
    double balance = 5000.0;
    int choice;

    do {
        cout << "\n==============================\n";
        cout << "         ATM SIMULATION\n";
        cout << "==============================\n";
        cout << "Current Balance: Rs. " << balance << endl;
        cout << "------------------------------\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "------------------------------\n";
        cout << "Enter your choice: ";

        while (!(cin >> choice)) {
            cout << "Invalid input! Enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {

        case 1:
            cout << "\nCurrent Balance = Rs. " << balance << endl;
            break;

        case 2: {
            double deposit;

            cout << "Enter deposit amount: Rs. ";

            while (!(cin >> deposit) || deposit <= 0) {
                cout << "Invalid amount! Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            balance += deposit;

            cout << "Rs. " << deposit << " deposited successfully.\n";
            cout << "New Balance = Rs. " << balance << endl;

            break;
        }

        case 3: {
            double withdraw;

            cout << "Enter withdrawal amount: Rs. ";

            while (!(cin >> withdraw) || withdraw <= 0) {
                cout << "Invalid amount! Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (withdraw > balance) {
                cout << "Insufficient Balance!\n";
            }
            else {
                balance -= withdraw;
                cout << "Rs. " << withdraw << " withdrawn successfully.\n";
                cout << "Remaining Balance = Rs. " << balance << endl;
            }

            break;
        }

        case 4:
            cout << "\nThank you for using our ATM.\n";
            break;

        default:
            cout << "\nInvalid choice! Please select 1-4.\n";
        }

    } while (choice != 4);

    return 0;
}

