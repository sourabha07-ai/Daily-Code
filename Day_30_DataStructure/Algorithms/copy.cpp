#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// copy()
// Copies elements from one container to another.

int main(){
    vector<int> vec_tor = {12,23,44,56};
    vector<int> vec_tor2(4);

    copy(vec_tor.begin(),vec_tor.end(),vec_tor2.begin());

    for(int x : vec_tor2){
        cout <<x <<" ";
    }
}