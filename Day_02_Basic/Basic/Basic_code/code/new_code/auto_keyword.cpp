#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
    auto name_i = 3; //int
    auto name_f = 2.4f;//float
    auto name_d = 2.45;//double
    auto name_c = 'c';//char
    auto name_b = true;//bool
    auto name_pkc = "Sourabha.";//string
    cout <<typeid(name_i).name()<<" - int" <<endl; 
    cout <<typeid(name_f).name()<<" - float" <<endl;
    cout <<typeid(name_d).name()<<" - double" <<endl;
    cout <<typeid(name_c).name()<<" - char" <<endl;
    cout <<typeid(name_b).name()<<" - bool" <<endl;
    cout <<typeid(name_pkc).name()<<" - String";
}