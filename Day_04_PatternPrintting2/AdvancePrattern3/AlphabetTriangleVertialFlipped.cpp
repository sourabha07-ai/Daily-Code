#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter n: ";
    cin >> num;

    for(int i = 1;i <= num;i++){
        for(int j = 1;j<=num - i ;j++){
            cout <<"  ";
        }
        for(int k = 1; k <= i ;k++){
            cout <<(char)(i+64) <<" ";
        }
        cout <<endl;
    }

    return 0;
}