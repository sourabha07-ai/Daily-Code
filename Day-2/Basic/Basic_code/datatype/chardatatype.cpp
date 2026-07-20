#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    int num = 12;
    char str = 'A';

    int str1 = (int)str;


    cout << num << " " <<typeid(num).name() << endl;
    cout << str << " " <<typeid(str).name() << endl;    
    cout << str1 << " " <<typeid(str1).name() << endl;
    
    return 0;
}