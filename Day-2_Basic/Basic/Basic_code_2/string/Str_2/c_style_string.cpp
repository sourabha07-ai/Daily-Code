#include <iostreaM>
#include <string>
#include <typeinfo>
using namespace std;


int main(){
    string name_1 = "Sourabha";
    char name_2[] = "Puja";

    cout <<typeid(name_1).name() <<endl;
    cout <<typeid(name_2).name() <<endl;


    return 0;
}