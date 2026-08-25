/*
Difference Array. Given an array, create a new array where the value at index i is 
the absolute difference between arr[i] and arr[i+1]. For the last element,
 it should be the absolute difference between the last and the first element.
Constraints: 2 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109.
Sample Input: arr = {5, 9, 2} ⇒ Output: {4, 7, 3}
Explanation: |5 − 9| = 4, |9 −2| = 7, |2−5| = 3.
*/

#include <iostream>
#include<vector>
#include <cstdlib>
using namespace std;
vector<int> absoluteValue(vector<int>& arr){
    vector<int> result;
    int n = arr.size();
    int absValue = 0;
    for(int i = 0; i < n;i++){
        if(i < n-1){
            absValue =abs(arr[i] - arr[i+1]);  
            result.push_back(absValue);    
        }else{
           absValue = abs(arr[i] - arr[0]);
           result.push_back(absValue);
        }
    }
    return result;
}

int main(){
    vector<int> arr = {5,9,2};
    cout<<"Your array: ";
    for(int a:arr) cout << a <<" ";
    cout <<endl;

    vector<int> absolute_value = absoluteValue(arr);
    cout <<"Absolute Value is: ";
    for(int a:absolute_value) cout <<a <<" ";
    cout <<endl;
}