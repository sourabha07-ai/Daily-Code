#include <iostream>
using namespace std;

int main() {

    try {
        throw runtime_error("Database connection failed!");
    }
    catch (runtime_error &e) {
        cout << e.what();
    }
}