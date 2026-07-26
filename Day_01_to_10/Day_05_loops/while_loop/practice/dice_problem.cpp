#include <iostream>
using namespace std;

int main(){
    int dice = 1;
    while(dice <= 6){
        if(dice < 6){
            cout <<dice <<" is less than 6" <<endl;
        }else{
            cout <<dice <<" is Equal to 6" <<endl;
        }
        dice = dice + 1;
    }


    return 0;
}