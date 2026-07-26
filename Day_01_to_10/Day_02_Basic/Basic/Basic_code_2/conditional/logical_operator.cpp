#include <iostream>
using namespace std;

int main(){
    if(12 > 10 && 10 > 5){
        cout << "Both condition are true." <<endl;
    }if(12 > 10 || 10 < 5){
        cout <<"atleast one condition is True." <<endl;
    }if(!(23 < 12)){
        cout << "Reverse the Output";
    }

    return 0;
}