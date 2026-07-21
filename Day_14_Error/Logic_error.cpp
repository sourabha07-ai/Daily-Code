#include <iostream>
using namespace std;

int main() {

    try {
        throw logic_error("Wrong program logic!");
    }
    catch (logic_error &e) {
        cout << e.what();
    }
}