#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int> nums = {10,20,30,40,50};
   vector<int>::iterator rev_it;

   for(auto rev_it = nums.rbegin(); rev_it != nums.rend();rev_it++){
    cout << * rev_it <<" ";
   }
}