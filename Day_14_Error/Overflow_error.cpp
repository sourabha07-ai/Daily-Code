#include <iostream>
using namespace std;

int main() {

    try {
        throw overflow_error("Number is too large!");
    }
    catch (overflow_error &e) {
        cout << e.what();
    }
}