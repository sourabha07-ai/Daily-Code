#include <iostream>
using namespace std;

int main(){
    int arr1[] = {12,23,32,21,22}; 
    int size_arr = size(arr1);

    int mx = INT_MIN;
    for(int i = 0;i< size_arr;i++){
        if(arr1[i] > mx) mx = arr1[i];
    }

   cout <<"max " <<mx <<endl;
}