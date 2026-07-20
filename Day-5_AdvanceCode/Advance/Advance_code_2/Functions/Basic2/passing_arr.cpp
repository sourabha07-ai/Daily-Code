#include <iostream>
using namespace std;

int myFunction(int arr[5]){
    for(int i = 0;i <= 4;i++){
        cout << arr[i] <<" ";
    }

    return 0;
}

int main(){
  int arr[5] = {12,23,45,56,78};
  myFunction(arr);
    return 0;
}