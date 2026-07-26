#include <iostream>
using namespace std; 

int main(){
    int x = 5;
    int* ptr = &x;
    cout <<"ptr: " <<ptr <<endl;
    cout <<"x = " <<x <<endl;
    cout <<"*ptr = " <<*ptr <<endl;
  
    return 0;
}