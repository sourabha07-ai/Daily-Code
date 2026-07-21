#include <iostream>
using namespace std;

int main(){
    int i = 2;
    while(i <= 512){
        if(i == 32){
            i = i * 2;
            continue;
        }
        cout << i <<" ";
        i = i * 2;
    }

}