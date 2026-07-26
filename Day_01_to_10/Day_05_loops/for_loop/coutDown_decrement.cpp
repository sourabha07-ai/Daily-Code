#include<iostream>
using namespace std;

int main(){
  int count_num;
  cout <<"Enter CountDown Number: ";
  cin >> count_num;

  //This example prints a countdown from 5 to 1:
  for(int i = count_num;i >= 1;i--){
    cout << i <<endl;
  }

    return 0;
}