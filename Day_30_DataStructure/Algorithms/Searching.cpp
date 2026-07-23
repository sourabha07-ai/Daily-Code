#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {12,43,12,11,64,78,9};

    //find() function 
    //Searches for an element.
    auto it = find(nums.begin(),nums.end(),10);
    if(it != nums.end()){
        cout <<"Found" <<endl;
    }else{
        cout <<"Not Found" <<endl;
    }

    // 2.count() function
    //  Counts how many times a value appears.
    cout << count(nums.begin(),nums.end(),12) <<endl;

    // 3.max_element()
    // Returns an iterator to the largest element.
    cout << *max_element(nums.begin(),nums.end())<<endl;

    //4. min_element()
//    Returns an iterator to the smallest element.
    cout << *min_element(nums.begin(),nums.end())<<endl;
    
}