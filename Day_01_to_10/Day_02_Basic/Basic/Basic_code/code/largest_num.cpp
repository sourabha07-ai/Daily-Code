#include <iostream>
using namespace std;

#define g "\033[32m"
#define reset "\033[0m"

int main(){
    int num1,num2;
    cout <<g <<"Enter Two Number: " <<reset;
    cin >> num1 >>num2;

    if(num1 > num2){
        cout <<g << num1 <<reset <<" Greater than " <<g <<num2 << reset <<endl;
    }
    else if(num1 == num2){
        cout <<g <<"Both are equal" <<reset;
    }
    else{
        cout <<g <<num2 <<reset <<" Greater than " <<g <<num1 << reset <<endl;
    }
}