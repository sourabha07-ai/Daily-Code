#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {10,20,30,30,30,40,50};
    auto it = upper_bound(nums.begin(),nums.end(),30);
    cout << it - nums.begin();
}