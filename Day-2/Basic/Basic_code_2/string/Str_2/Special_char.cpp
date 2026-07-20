#include <iostream>
using namespace std;

int main() {
    string txt = "We are the so-called \"Vikings\" from the north.";
    string txt2 = "We are 'Avenger'";

    bool insideQuotes = false;

    for(char ch : txt) {
        if(ch == '"') {
            insideQuotes = !insideQuotes;
            cout << ch;  // print quote normally
        }
        else if(insideQuotes) {
            cout << "\033[32m" << ch << "\033[0m"; // red
        }
        else {
            cout << ch;
        }
    }
    return 0;
}