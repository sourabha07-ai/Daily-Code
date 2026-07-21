#include <iostream>
using namespace std;
#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
    int age;
    cout <<y <<"Enter your Age: " <<reset;
    cin >> age;

   try{
    if(age >= 18){
        cout <<g <<"Access granted " <<reset <<"- you are old enough." <<endl;
    }else{
        throw(age);
    }
   }
   catch(int myNum){
     cout <<r <<"Access Denied!!" <<reset <<" You must be at least 18 years old." <<endl;
     cout <<y <<"Age is: " <<reset <<myNum <<endl;
   }
   








}