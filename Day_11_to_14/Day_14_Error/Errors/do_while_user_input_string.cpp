#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define p "\033[35m"
#define reset "\033[0m"

int main() {
    string name;
    bool valid;

    do {
        cout << g << "Enter Your Name: " << reset;
        getline(cin, name);

        valid = !name.empty();

        for (char ch : name) {
            if (!isalpha((unsigned char)ch) && ch != ' ') {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << r << "Please enter only letters and spaces.\n" << reset;
        }

    } while (!valid);

    cout << y << "Hello! " << p << name << reset << endl;

    return 0;
}