#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<string> cars = {"Volvo","BMW","TATA","Suzuki"};
  vector<int> numbers = {12,23,34,45,56,67,78};

  for(string car : cars){
    cout <<car <<" ";
  }
  cout <<endl;

  for (int num : numbers){
    cout <<num <<" ";
  }
  cout <<endl;

  cout <<cars[3] <<" " <<cars[2] <<" " <<cars[1] <<" " <<cars[0] <<endl;
  
  cout <<numbers[6] <<" " <<numbers[5] <<" " <<numbers[4] <<" " <<numbers[3];
  cout <<" " <<numbers[2] <<" " <<numbers[1] <<" " <<numbers[0] <<endl;
 
    return 0;
}