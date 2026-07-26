#include <iostream>
using namespace std;

#define g  "\033[32m"
#define reset "\033[0m"


int main(){
    float num1,num2;
    cout <<"Enter numbers :";
    cin >> num1 >> num2;
    
    float sum = num1 + num2;
    float sub = num1 - num2;
    float div = num1 / num2;
    // float mod = num1 % num2;
    float mul = num1 * num2;

    cout <<"Addition: " <<g <<sum <<reset <<endl;
    cout <<"Subtact: " <<g <<sub <<reset <<endl;
    cout <<"Multiply: " <<g <<mul <<reset <<endl;
    cout <<"Division: " <<g <<div <<reset <<endl;
    // cout <<g <<mod <<reset <<endl;
     
}