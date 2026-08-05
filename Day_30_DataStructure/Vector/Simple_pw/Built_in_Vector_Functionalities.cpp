#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {15,9,45,43,12,8,4,10};
    cout <<"Sort the array: ";
    sort(v.begin(),v.end());
    for(int ele: v) cout << ele <<" ";

    cout <<endl;

    cout <<"Reverse the array: ";
    reverse(v.begin(),v.end());
    for(int ele: v) cout <<ele <<" ";
}