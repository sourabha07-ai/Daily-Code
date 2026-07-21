#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
        cout << "It is a 3-digit number.";
    } else {
        cout << "It is not a 3-digit number.";
    }

    return 0;
}