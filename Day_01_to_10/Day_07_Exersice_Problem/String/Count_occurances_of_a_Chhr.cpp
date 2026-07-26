#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a String: ";
    getline(cin, str);

    cout << "Enter Character: ";
    cin >> ch;

    int count = 0;

    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "'" << ch << "' occurs " << count << " times.";

    return 0;
}