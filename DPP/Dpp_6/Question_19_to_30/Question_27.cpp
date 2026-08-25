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
/* 
Minimum Absolute Difference. Find the minimum absolute difference between 
any two adjacent elements in the given array.
Constraints: 2 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109.
Sample Input: arr = {10, 20, 15, 30, 28} ⇒ Output: 2
Explanation: Differences: |10 − 20| = 10, |20 − 15| = 5, |15 − 30| = 15, 
|30 − 28| = 2. The minimum is 2.
*/
#include <iostream>
#include <vector>
using namespace std;

void  Difference(vector<int>& arr){
    vector<int> ans;
    int diff;
    int max_value = INT_MAX;
    int n = arr.size();
    for(int i = 0; i < n;i++){
        if(i < n-1){
            diff = arr[i] - arr[i+1];
            if(diff < max_value){
                max_value = diff;
            }
        }
    }
     cout << "The minimum is " <<diff <<endl; 

}

int main(){
   vector<int> arr = {10, 20, 15, 30, 28};
    cout << "Your array: ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

     Difference(arr);

    return 0;
}
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