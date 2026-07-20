#include <iostream>
#include <iostream>
using namespace std; 

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
    string str = "I \"love\" U";
    
    bool switch_on = false;

    for(char ch : str){
        if(ch == '"'){
            switch_on = !switch_on;
            cout << ch ;
        }else if(switch_on){
            cout<<g <<ch <<reset ;
        }else{
            cout << ch;
        }
    }

  
    return 0;
}