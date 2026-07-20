#include <iostream>
#include<functional>
using namespace std;

void myFunction(function<void()>func){
    func();
    func();
    func();
}

int main(){
    auto message = [](){
        cout <<"Hello World!"<<endl;
    };
    myFunction(message);
    return 0;
}