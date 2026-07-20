#include <iostream>
using namespace std;


int main(){
  int num;
  cout<<"Enter a Number: ";
  cin >>num;

  if(num >=1000 and num <= 9999){
    cout <<"This is 4 digit number."<<endl;
  }else{
    cout<<"This is not a 4digit number" <<endl;
  }

    return 0;
}