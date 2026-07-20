#include <iostream>
using namespace std;

int main (){
 double num1,sum = 0 ;

 do{
    cout <<"Enter number: ";
    cin >>num1 ;
    
    sum = sum + num1;
      
    }
 while(num1 != 0);
 
 cout <<"Sum is : " <<sum <<endl;
 cout <<"Thank You! " <<endl;

    return 0;
}