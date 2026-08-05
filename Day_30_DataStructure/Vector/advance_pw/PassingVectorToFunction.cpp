#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void change(vector<int> v){ //pass by value
//     v[2] = 34;
// }
void change(vector<int>& v){ // pass by Referance
    v[2] = 34;
}

int main(){
    vector<int> v  = {30,20,10,60,50};
    change(v);
    cout << v[2] <<endl;
    
}