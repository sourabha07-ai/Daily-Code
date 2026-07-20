#include <iostream>
using namespace std;

int main(){
   char ch;
   cout <<"Enter a Character: ";
   cin >>ch;

 if(ch >= 'A' && ch <= 'Z'){
       cout <<"UpperCase.";
   }else{
    cout <<"LowerCase";
   }   

    return 0;
}