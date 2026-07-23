#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
//   binary_search()
//   Works only on a sorted container.
    vector<int> digits = {1,2,3,4,5,6};
    if(binary_search(digits.begin(),digits.end(),3)){
        cout <<"Found it" <<endl;
    }else{
        cout <<"Not Found" <<endl;
    }
}