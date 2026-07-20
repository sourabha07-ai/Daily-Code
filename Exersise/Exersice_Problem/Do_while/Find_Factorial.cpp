#include <iostream>
using namespace std;

//Find factorial
int main(){
   int num;
   cout <<"Enter a Number: ";
   cin >>num ;

   int fact = 1;

   do{
       fact = fact * num;
       num--;

   }while(num >= 1);

   cout <<"Factorial is " <<fact <<endl;

    return 0;
}