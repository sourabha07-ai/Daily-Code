#include <iostream>
using namespace std;

int main() {
    int r ; // Radius
    cout <<"Enter r: ";
    cin >> r;
    
    for (int i = -r; i <= r; i++) {
        for (int j = -r; j <= r; j++) {
            int d = i * i + j * j;

            if (d >= r * r - r && d <= r * r + r)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}