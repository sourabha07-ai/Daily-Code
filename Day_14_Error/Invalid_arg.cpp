#include <iostream>
using namespace std;

int main() {

    try {
        throw invalid_argument("Age cannot be negative!");
    }
    catch (invalid_argument &e) {
        cout << e.what();
    }
}