#include <iostream>
using namespace std;

// Sum digits of a number
int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >>num;

    int sum = 0;
    while(num > 0){
        sum = sum + (num % 10);
        num = num /10;
    }
    cout <<"Sum Of digits in Number: " <<sum <<endl; ;
    
    return 0;
}