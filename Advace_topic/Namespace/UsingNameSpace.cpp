#include <iostream>
using namespace std;
  
namespace math{
    void print(){
        cout <<"print() function in Math Namespace" <<endl;
    }
}

namespace physics {
    void print(){
        cout <<"print() function in Physics Namespace!"<<endl;
    }
}


int main(){
  math::print();
  physics::print();
}