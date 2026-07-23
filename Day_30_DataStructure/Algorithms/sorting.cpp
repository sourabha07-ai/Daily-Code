#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> numbers = {23,21,14,64,96};
    
    sort(numbers.begin(),numbers.end()); //ascending order
    sort(numbers.begin(),numbers.end(),greater<int>()); //descending order

    for(int num:numbers){
        cout <<num <<" ";
    }
}