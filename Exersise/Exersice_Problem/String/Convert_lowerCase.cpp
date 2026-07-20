#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;

    cout << "Enter a String: ";
    getline(cin, str);

    for (size_t i = 0; i < str.size(); i++) {
        str[i] = tolower(static_cast<unsigned char>(str[i]));
    }

    cout << "Lowercase: " << str;

    return 0;
}