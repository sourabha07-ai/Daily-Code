#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number(even/odd): ";
  cin >>num;

  cout<<((num % 2 == 0) ? "Even Number." :"Odd Number.");

    return 0;
}