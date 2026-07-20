#include <iostream>
using namespace std;

int main() {
    int balance = 5000;
    int choice, amount;

    for (;;) {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Current Balance: Rs." << balance << endl;
        }
        else if (choice == 2) {
            cout << "Enter deposit amount: ";
            cin >> amount;

            balance += amount;

            cout << "Deposit Successful!" << endl;
            cout << "New Balance: Rs." << balance << endl;
        }
        else if (choice == 3) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (amount > balance) {
                cout << "Insufficient Balance!" << endl;
            } else {
                balance -= amount;

                cout << "Withdrawal Successful!" << endl;
                cout << "Remaining Balance: Rs." << balance << endl;
            }
        }
        else if (choice == 4) {
            cout << "Thank You for Using ATM!" << endl;
            break;
        }
        else {
            cout << "Invalid Choice! Try Again." << endl;
        }
    }

    return 0;
}