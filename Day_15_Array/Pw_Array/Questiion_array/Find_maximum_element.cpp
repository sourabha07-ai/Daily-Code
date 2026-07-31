#include <iostream>
using namespace std;

int main(){
    int arr[] = {1-6,-14,-18,-10,-10,-20};
    int size_of_arr = sizeof(arr)/4;

    int max = INT_MIN; //! Smallest integer

    for(int i = 0; i < size_of_arr ; i++){
        if( arr[i] > max) {
            max = arr[i];
        }
    }
    cout <<"Maximum Number: " <<max;
}