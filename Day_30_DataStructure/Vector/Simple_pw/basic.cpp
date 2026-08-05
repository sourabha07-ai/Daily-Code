#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(5,9);
    int n = arr.size();
    for(int i: arr){
        cout <<i <<" ";
    }
    cout <<"\nVector Size " << n <<endl;

    // vector <int> arr[5];
    // for(int i = 0; i < 5; i++ ){
    //     cout <<&arr[i] <<" ";  //Address Print karta hey
    // }
}