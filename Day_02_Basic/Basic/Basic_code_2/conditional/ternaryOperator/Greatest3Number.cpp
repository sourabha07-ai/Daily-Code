#include <iostream>
using namespace std;

int main(){
  int num1,num2,num3;
  cout <<"Numbers Are: "
  cin >>num1>>num2>>num3;

  cout<< ((num1 > num2 && num1 > num3) ? "first number is great"
    :(num2 > num1 && num2 > num3) ? "second is bigger."
    :(num3 > num2 && num3 > num1) ? "third is bigger." 
    :(num1 == num2 && num2 == num3) ?"All are equals" 
       :(num1 == num2) ? "first and Second is equal" 
       :(num1 == num3) ? "First and last is Equal" 
       : "Second and last are Equal."
);



  





    return 0;
}