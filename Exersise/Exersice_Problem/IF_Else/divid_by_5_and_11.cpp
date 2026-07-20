#include <iostream>
using namespace std;

int main(){
   //Check whether a number is divisible by 5 and 11.
   int num;
   cout <<"Enter number : ";
   cin >> num; 

   if(num == 0){
     cout <<"Number is Zero." <<endl;
   }else{
        if(num % 5 == 0 ){
           cout <<num << "divisible by 5" <<endl;
        }
        if(num % 11 == 0){
            cout<<num <<" divisible by 11"<<endl;
       } 
    }if(num % 5 == 0 && num % 11 == 0 && num != 0){
        cout <<num << " is divisible by 5 and 11" <<endl;
   }else{
        cout <<num <<" not divisible by 5 and 11" << endl;
   }
    return 0;
}