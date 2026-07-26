#include <iostream>
using namespace std;

int main(){
   int age;
   cout <<"Typed the Age: ";
   cin >> age;

   int vote_age = 18;

   bool is_true = (age >= vote_age) ;
   
   cout <<boolalpha;
   cout << is_true <<endl;

   if(is_true)  
       cout<< "Eligible for Vote" <<endl;
   else    
       cout<<"Not Eligible for Vote." <<endl;

    return 0;
}