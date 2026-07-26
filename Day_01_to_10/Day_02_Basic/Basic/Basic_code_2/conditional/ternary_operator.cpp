#include <iostream>
using namespace std;

 

int main(){
     int num = 20;
     cout <<boolalpha;

     bool result = (num > 20) ? true :false ;
     string result_2 = (num > 22) ? to_string(num) + " is greater than 22" 
     : to_string(num) + " is less than 22" ;

     cout <<result <<endl;
     cout <<result_2 <<endl;

     cout << ((num==20) ? "numer is 20" : "number is " + to_string(num)) <<endl;

    return 0;
}