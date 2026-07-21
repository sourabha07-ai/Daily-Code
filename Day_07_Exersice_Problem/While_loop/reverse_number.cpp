#include <iostream>
using namespace std;

// Reverse a number
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin >> num;

    int rev = 0;

    while (num > 0){
        rev = (10 * rev) + num % 10;
        num = num /10; 
    }
    cout <<rev;
    


    return 0;
}

// aother method;
