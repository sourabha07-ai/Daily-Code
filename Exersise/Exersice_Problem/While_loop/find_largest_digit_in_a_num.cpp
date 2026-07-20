#include <iostream>
using namespace std;

//Find the largest digit in a number
int main(){
   int num;
   cout <<"Enter a Number: ";
   cin >>num;
   int largest_digit = 0;
   int digit;

   while(num > 0){
     digit = num % 10;
       if (digit > largest_digit){
          largest_digit = digit;
       }
     num  = num / 10; 
   }
   cout <<"Largest Digit "<<largest_digit <<endl;

    return 0;
}