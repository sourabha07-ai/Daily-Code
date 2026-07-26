#include <iostream>
using namespace std;

// Check voting eligibility (age ≥ 18).

int main(){
   int age;
   cout <<"Enter your age: ";
   cin >> age;

   if(age == 0 || age < 0 || age > 100){
      cout <<"Invalid Age."<<endl;
   }else if(age >= 18){
      cout <<"Eligibility for Vote." <<endl;
   }else{
      cout <<"Not Eligibility." <<endl;
   }

    return 0;
}