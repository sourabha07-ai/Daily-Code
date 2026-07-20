#include <iostream>
#include<list>
using namespace std;

int main(){
  list<int> nums = {12,23,45,56,78};
  for(int num : nums){
    cout <<num <<" " ;
  }
 cout <<endl;
  //Access
  int numFirst = nums.front(); //First element
  cout <<numFirst <<endl;

  cout <<nums.back() <<endl;// last Element

  //! Change the Value

  nums.front() = 20;
  nums.back() = 80;

  for(int num : nums){
    cout << num <<" ";  //? 20 23 45 56 80
  }

  cout <<endl;
  //! Add Element

  nums.push_front(19);
  nums.push_back(81);
  for(int num : nums){
    cout << num <<" ";
  }
cout <<endl;
  //!Remove Element
  nums.pop_front();
  nums.pop_back();
  for(int num : nums){
    cout << num << " ";
  }
  cout <<endl;
  //!Size Of LIST
  cout <<nums.size() <<endl;

  //! Check List is Empty or not 
  cout << nums.empty() <<endl; //0 means false.it is not empty

  list<int> nums2 = {};
  cout <<nums2.size()<<endl //0
  cout <<nums.empty() <<endl;//0

    return 0;
}