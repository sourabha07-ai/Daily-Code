#include <iostream>
using namespace std;

int main(){
  int base,exp;
  cout <<"Enter base: ";
  cin >> base;
  cout <<"Enter exponential: ";
  cin >> exp;
  
  int power = 1;
  int i = 1;

  while(i <= exp){
    power = power * base;
    i++;
  }
  cout <<base <<" Power of " <<exp <<" is " <<power <<endl;
    return 0;
}