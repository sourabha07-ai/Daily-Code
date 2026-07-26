#include <iostream>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

int main(){
  int age;
  cout <<y <<"Enter Your Age: " <<reset;
  cin >> age;

  try{
    if(age >= 18){
        cout <<g <<"Access granted %" <<reset <<endl;
    }else{
        throw 505;
    }
  }catch(...){
    cout <<r <<"Access Declined!!" <<reset <<endl;
  }

    return 0;
}