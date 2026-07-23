#include <iostream>
#include <list>
using namespace std;

int main(){
  list<int> nums = {10,20,30,40,50};
//   list<int>::iterator it;

  for(auto it = nums.begin(); it != nums.end();it++){
    cout << *it <<" ";
  }
}