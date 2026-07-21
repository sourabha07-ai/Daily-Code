#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Enter n1: ";
    cin >> n1;

    cout << "Enter n2: ";
    cin >> n2;

    cout << "Enter n3: ";
    cin >> n3;

    // Check equality
    if (n1 == n2 && n2 == n3) {
        cout << "All numbers are equal" << endl;
    }
    else {
        if (n1 == n2)
            cout << n1 << " equal to " << n2 << endl;

        if (n2 == n3)
            cout << n2 << " equal to " << n3 << endl;

        if (n1 == n3)
            cout << n1 << " equal to " << n3 << endl;
    }

    // Find largest
    if (n1 > n2 && n1 >n3) {
        cout << "Largest number is " << n1 << endl;
    }
    else if (n2 > n1 && n2 > n3) {
        cout << "Largest number is " << n2 << endl;
    }
    else {
        cout << "Largest number is " << n3 << endl;
    }

    return 0;
}