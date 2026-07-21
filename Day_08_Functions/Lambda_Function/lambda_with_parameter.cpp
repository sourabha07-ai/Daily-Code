#include <iostream>
using namespace std;

int main(){
  auto add = [](int a,int b){
    return a + b;
  };
  
    cout<<add(10,23);
    return 0;
}