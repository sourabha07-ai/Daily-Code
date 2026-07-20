#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
   int a,b,c;
   cout <<y <<"Enter 3 Number: " <<reset;
   cin >> a >> b >> c ;
   
   if(a <= b and a <= c){
    cout <<g <<a <<" is a Smallest." <<reset <<endl;
   }else if(b <= a and b <= c){
    cout <<g <<b <<" is a Smallest" <<reset <<endl;
   }else{
    cout <<g << c << " is a Smallest" <<reset <<endl;
   }

}