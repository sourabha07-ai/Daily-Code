#include <iostream>
using namespace std;

int main(){
  int num;
  do{
    /* code */
    cout <<"Enter Number between 1 and 5.: ";
    cin >> num;
  } while (num < 1 || num > 5 ) ;
  
    cout <<"Your Number: " <<num;
}