#include <iostream>
using namespace std;

int main(){
   string food = "Pizza";
   
   cout << &food <<endl;

   string *ptr = &food;

   cout<<ptr <<endl;
   cout <<*ptr <<endl;


    return 0;
}