#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "\nBinary Representation:\n";

    for (char ch : sentence) {
        cout << bitset<8>((unsigned char)ch) << " ";
    }

    return 0;
}