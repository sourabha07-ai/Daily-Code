#include <iostream>
using namespace std;
// Print squares of numbers from 1 to N.
int main(){
    int num;
    cout <<"Enter a number: ";
    cin >>num;

    int squ;

    for(int i = 1;i <= num;i++){
        squ = i * i ;
        cout <<squ <<" ";
    }


    return 0;
}