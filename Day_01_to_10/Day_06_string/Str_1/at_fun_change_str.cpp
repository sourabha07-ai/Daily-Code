#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"




//using at()function
int main(){
   string str = "Love_Puja";
   cout <<"Name: "<<g <<str <<reset <<endl;
   cout<<"length: " <<str.length() << endl;

   cout<<"First ch: " <<str.at(0) <<endl;
   cout <<"Middle ch: " <<str.at(str.length()/2) <<endl; 
   cout <<"last ch: " <<str.at(str.length() -1) <<endl;

   //update ch
    str.at(1) = 'i';
    str.at(2) = 'f';
    str.at(3) = 'e';
   cout <<"Upadate Name: "<<y <<str <<reset <<endl;

   
    return 0;
}