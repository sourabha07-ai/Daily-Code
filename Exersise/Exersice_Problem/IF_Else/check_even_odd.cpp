#include <iostream>
#include <string>
using namespace std;
#define g "\033[32m"
#define reset "\033[0m"

// Check whether a number is even or odd.

int main(){
   int num;
   cout <<"Enter a number : ";
   cin >> num;

   string check = (num == 0) ? "Number is zero."
                  :(num % 2 == 0 ) ? "Even"
                  :(num % 2 != 0 ) ? "Odd"
                  :"Invalid-input";
      cout <<g << check <<reset <<endl;            

    return 0 ;
}