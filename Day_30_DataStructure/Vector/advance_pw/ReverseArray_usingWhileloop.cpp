#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int>& v){
    for (int ele: v) cout <<ele <<" ";
    cout <<endl;
}

int main(){
    vector<int> v = {10,20,40,60,80};
    cout <<"Original array: ";
    print(v);

    int i = 0, j = v.size()-1;
    while(i < j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
    cout <<"Reverse array: ";
    print(v);







    return 0;
}