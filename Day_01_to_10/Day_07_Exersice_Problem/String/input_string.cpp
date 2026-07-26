#include <iostream>
#include <string>
using namespace std;

// Input and print a string
int main(){
  string first_name,last_name;
  cout <<"Enter First name: ";
  cin >> first_name;

  cin.ignore();

  cout <<"Enter last_name: ";
  cin >>last_name;

  cout <<first_name <<" " <<last_name <<endl;

    return 0;
}