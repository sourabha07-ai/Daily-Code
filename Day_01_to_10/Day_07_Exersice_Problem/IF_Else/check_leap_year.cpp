#include <iostream>
using namespace std; 
/* A year is a leap year if:

1.It is divisible by 4, and
2.It is not divisible by 100, unless
3.It is also divisible by 400. */

int main(){
    int year;
     cout <<"Enter Year: ";
     cin >> year;

     if (year % 400 == 0){
         cout<<"leap year";
     }else if (year % 100 == 0){
          cout<<" not a leap year";
      }else if (year % 4 == 0){
          cout <<"leap year";
      }else{
          cout << "not a leap year";
      }
    return 0;
}