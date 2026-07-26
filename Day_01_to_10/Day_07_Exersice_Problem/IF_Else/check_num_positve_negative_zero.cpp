#include <iostream>
#include <string>
using namespace std;
#define g "\033[32m"
#define reset "\033[0m"

  //Check if a number is positive, negative, or zero.
int main(){
   int n;
   cout <<"Enter a number: ";
   cin >> n;

   string message = (n > 0) ? "Positive"
                   :(n < 0) ? "Negative"
                   :(n == 0) ? "Zero"
                   : "Invalid-input. Nothing";
   cout <<g <<message <<reset <<endl;                

    return 0;
}