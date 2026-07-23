#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
  vector<int> nums = {10,20,30,40,50,60,70};
  rotate(nums.begin(),nums.begin()+4,nums.end());
  for (int num :nums){
    cout << num <<" ";
  }
}