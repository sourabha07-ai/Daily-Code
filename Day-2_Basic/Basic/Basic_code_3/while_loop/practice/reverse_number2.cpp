#include <iostream>
using namespace std;

int main(){
   int number;
   cout <<"typed Number: ";
   cin >> number;

   int reverse_number = 0;
   
   while(number){
    reverse_number = (reverse_number * 10) + (number % 10); 
     number = number / 10;
   }

   cout <<"Reverse Number: " << reverse_number <<endl;


    return 0;
}