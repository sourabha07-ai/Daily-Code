#include <iostream>
using namespace std;

void puja(){
   cout <<"Hii Puja." <<endl;
}
void sourabha(){
    cout <<"Hii Sourabha Jena."<<endl;
    puja();
}
void ShreeRam(){
    cout <<"Lord Ram" <<endl;
    sourabha();
}
int main(){
    ShreeRam();

    return 0;
}