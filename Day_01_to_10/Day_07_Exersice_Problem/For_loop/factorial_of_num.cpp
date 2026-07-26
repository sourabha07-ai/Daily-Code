#include<iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

// Find the factorial of a number.
int main(){
 int num;
 cout <<"Enter a Number: ";
 cin >> num;
  
 double fact = 1;
 for(int i = 1; i <= num ;i++){
    fact  = fact * i;
    if(i <= num){
        if(i==num){
            cout <<i <<" = ";
        }else{
            cout <<i <<" * ";
        }
    }
 }
 cout <<g <<fact <<reset ;

    return 0;
}