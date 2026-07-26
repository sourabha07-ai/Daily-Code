#include <iostream>
#include <string>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

int main(){
    string str = "Sourabha";

    bool is_true =( str == "Sourabha");
  
    if(!is_true){
        cout << str <<endl;
    }else if(is_true){
        cout <<y << " else_if block " <<reset <<str <<endl;
    }else{
        cout << "Puja";
    }

    return 0;
}