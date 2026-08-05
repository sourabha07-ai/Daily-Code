#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr(5,-2);
    for(size_t i = 0; i < arr.size();i++){
        cout <<arr[i] <<" ";
    }
   cout <<endl;

   arr.push_back(5);
   arr.push_back(12);
   arr.push_back(24);

   for(int i: arr){
    cout << i <<" ";
   }
  
   cout <<endl;
   
   arr.pop_back();

   for(int i : arr){
    cout << i <<" ";
   }
}