#include <iostream>
using namespace std;

namespace Subject::Physics{
    void show(){
        cout <<"C++ 17" <<endl;
    }
}
int main(){
    Subject::Physics::show();
}