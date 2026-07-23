#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

// accumulate()
// Calculates the sum of elements.
// Header:
// #include <numeric>

int main(){
    vector<int> x = {2,4,5,8};
    cout <<accumulate(x.begin(),x.end(),0);

}