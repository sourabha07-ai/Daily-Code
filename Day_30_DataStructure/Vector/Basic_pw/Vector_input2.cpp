#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cout <<"Enter Size of Vector: ";
  cin >> n;

  vector<int> nums(n);
  int n1 = 1;
  for(int &x: nums){
    cout <<"Enter "<<n1++ <<" num: ";
    cin >> x;
  }

  for(int num : nums){
    cout <<num <<" " ;
  }

    return 0;
}