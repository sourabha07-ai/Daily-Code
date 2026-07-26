#include <iostream>
using namespace std;

int main(){
  int number;

  do{
    cout <<"Enter a positive number: ";
    cin >> number;
  }
  while(number > 0);

   if (number < 0){
     cout << "Number is " << number <<" (negative)" <<endl;
   }
   else{
    cout <<"Number is Zero(0)." <<endl;
   }

    return 0;
}