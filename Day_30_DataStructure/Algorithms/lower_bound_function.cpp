#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 5.lower_bound()
// Returns the first position where a value can be inserted without breaking the sorted order.

int main(){
    vector<int> num = {23,32,45,21,12,89};
     sort(num.begin(),num.end());
  
     for(int n :num){
        cout <<n <<" " ;
     }
     cout <<endl;
    auto it = lower_bound(num.begin(),num.end(),13);
    cout <<it - num.begin();
}