#include <iostream>
#include <string>
using namespace std;

//Find the length of a string
int main(){
   string name;
   cout <<"Enter name: ";
   getline(cin,name);
   
   int count = 0;

    for (char ch : name) {
        if (ch != ' ') {
            count++;
        }
    }

    cout << "Length of String (without spaces): " << count << endl;

    return 0;
}