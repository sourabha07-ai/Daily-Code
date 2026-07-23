#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {12,34};
    vector<int>::const_iterator const_it;

    const_it = nums.begin();
    // *const_it = 13;
    cout <<*const_it <<endl;

}