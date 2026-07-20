#include <iostream>
using namespace std;
//This example calculates the sum of numbers from 1 to 5:
int main(){
  int num;
  cout <<"Enter a number: ";
  cin >> num;
  
  int sum = 0;
  for(int i = 1;i <=num; i++){
    sum = sum + i;
  }
  cout << "Sum of numbers from 1 to " <<num <<" : " <<sum <<endl;  

    return 0;
}