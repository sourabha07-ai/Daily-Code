#include <iostream>
using namespace std;

namespace myNamespace{
    int x = 20;
}
using namespace myNamespace;

int main(){
    // cout <<myNamespace::x <<endl;
    cout <<x <<endl; // No need to write  myNamespace::x
}