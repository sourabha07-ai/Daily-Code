 #include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line, binary;

    cout << "Enter Binary Sentence (8 bits separated by spaces): ";
    getline(cin, line);

    stringstream ss(line);

    cout << "\nOriginal Text: ";

    while (ss >> binary) {
        int decimal = stoi(binary, nullptr, 2);
        char ch = (char)decimal;
        cout << ch;
    }

    cout << endl;

    return 0;
}