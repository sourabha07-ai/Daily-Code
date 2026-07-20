#include <iostream>
#include <vector>
using namespace std;


int main(){
   int n;
   cout <<"Enter Size of Vector: ";
   cin  >> n;

  vector<int> nums;
  cout <<"Enter " <<n <<" Numbers." <<endl;

  int n1 = 1;
  for(int i = 0; i < n ;i++){
    int x;
    cout <<"Enter " <<n1++ <<" num: ";
    cin >> x;
    nums.push_back(x);
  } 

  cout <<"Your Numbers : ";
  for (int num : nums){
     cout <<num <<" ";
  }
    return 0;
}