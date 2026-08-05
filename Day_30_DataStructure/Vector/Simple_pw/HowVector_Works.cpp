#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(0);

    for(int i:v){
        cout <<i <<" ";
    }

}