#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& v){
    for(int ele: v) cout <<ele <<" ";
}

int main(){
    vector<int> v = {31,83,34,23,90,79};
    int n = size(v);

    cout <<"Original array: ";
    print(v);
    cout <<endl;

    for(int i = 0; i < n/2 ;i++){
        int temp = v[i];
        v[i] = v[n-1-i];
        v[n-1-i] = temp;
    }
    cout <<"Reverse array: ";
    print(v);
}