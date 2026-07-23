#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> numbers = {12,12,13,13,14,15,16};
     auto it = unique(numbers.begin(),numbers.end());

     numbers.erase(it,numbers.end());
     for(int n : numbers){
        cout << n <<" ";
     }
}