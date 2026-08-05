#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {12,23,45,66};
    cout <<"Vector Size: " << v.size() <<endl;
    cout << "Vector Capacity: "<<v.capacity() <<endl;
    cout <<v.at(0) <<" "<< v.at(1)<<" "<< v.at(2)<<" "<< v.at(3)<<endl;

    
}
