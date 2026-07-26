#include <iostream>
#include <string>
using namespace std;


int main(){
   string first_name,last_name;
   cout << "Enter your first name : ";
   cin >>first_name;
   cout <<"last name : ";
   cin >> last_name;

   //concat operation
   string name = first_name + last_name;
   string name2 = first_name + " " + last_name;

   //append()function
   string name3 = first_name.append(last_name);

   cout <<"Name Without space:- " << name <<endl;
   cout <<"Name with space:- " <<name2 <<endl;
   cout <<"Using Append() function:- " <<name3 <<endl;
   

    return 0;
}