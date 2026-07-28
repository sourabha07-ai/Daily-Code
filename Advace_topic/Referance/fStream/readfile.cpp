 #include <iostream>
#include <fstream>   // Required for ifstream
using namespace std;

int main() {
    string myText;

    // Read from the text file
    ifstream MyReadFile("../output/filename.txt");

    // Check if the file opened successfully
    if (!MyReadFile) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    // Read the file line by line
    while (getline(MyReadFile, myText)) {
        cout << myText << endl;
    }

    // Close the file
    MyReadFile.close();

    return 0;
}