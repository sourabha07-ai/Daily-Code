#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v(4);
    fill(v.begin(),v.end(),3);
    for(int num: v){
        cout <<num <<" ";
    }
}