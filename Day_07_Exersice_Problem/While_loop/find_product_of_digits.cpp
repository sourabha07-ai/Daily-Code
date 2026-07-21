#include <iostream>
using namespace std;

// Find the product of digits
int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;

    int mul = 1;

    while(num > 0){
        mul = mul * (num % 10);
        num = num /10;
    }
    cout <<mul <<" is product of digits"<<endl;

    return 0;
}