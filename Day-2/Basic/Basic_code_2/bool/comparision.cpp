#include <iostream>
using namespace std;

int main(){
   cout <<boolalpha;
    cout <<(9 > 10) <<endl;//False
    cout <<(10 > 9) <<endl;//true
    cout << (9 < 10) << endl;//true
    cout << (10 <9) << endl;//false

    cout <<(true == true) <<endl;//true
    cout << (true == false) <<endl;//false

    cout << (true != true) <<endl;//false
    cout << (true != false) <<endl;//true

    return 0;
}