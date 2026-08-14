#include <iostream>
#include<vector>
using namespace std;

void waveArray(vector<int>& arr){
     for(int i = 0; i < arr.size() - 1; i += 2){
          swap(arr[i],arr[i+1]);
     }

     cout <<endl;
     
     cout <<"Wave Array: ";
     for(int a:arr){
          cout <<a <<" ";
     }
}

int main(){
     vector<int> arr ={1,2,3,4,5,6};
     cout <<"Original Array: ";
     for(int n:arr){
          cout <<n <<" ";
     }
     waveArray(arr);

     
}