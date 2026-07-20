#include <iostream>
using namespace std;

int main(){
   int a,b,c;
   cout <<"Enter sides of trangle: ";
   cin >>a >>b >>c;

   if(a+b > c and a+c > b and b+c > a){
    cout <<"This is a Triangle." <<endl;
   }else{
    cout <<"Not a Triangle." <<endl;
   }



    
}