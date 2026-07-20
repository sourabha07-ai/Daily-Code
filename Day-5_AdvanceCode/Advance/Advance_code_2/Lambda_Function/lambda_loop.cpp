#include <iostream>
using namespace std;


int main(){
    for (int i = 1;i <= 4;i++){
        auto show = [i](){
            cout <<"Number: " << i <<endl; 
        };
        show();
    }
    return 0;
}
