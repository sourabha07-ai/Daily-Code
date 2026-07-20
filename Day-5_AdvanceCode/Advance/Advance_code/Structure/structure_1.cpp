#include <iostream>
#include <string>
using namespace std;

int main(){
  struct structure_1
  {
     int myNum;
     string myString;
  }s1,s2;
  s1.myNum = 10;
  s1.myString = "Puja";

  s2.myNum = 12;
  s2.myString = "Sourabha";


  cout << s1.myNum <<endl;
  cout << s1.myString <<endl;
  cout <<endl;
  cout <<s2.myNum <<endl;
  cout <<s2.myString <<endl;
  

    return 0;
}