#include <iostream>
using namespace std;

int main() {
    int r ; // Radius
    cout <<"Enter r: ";
    cin >> r;

    for (int i = -r; i <= r; i++) {
        for (int j = -r; j <= r; j++) {
            if (i * i + j * j <= r * r)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}