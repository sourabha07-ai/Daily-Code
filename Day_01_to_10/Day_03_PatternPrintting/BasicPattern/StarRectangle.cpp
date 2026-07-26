#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout <<"Number of Rows: ";
    cin >>m;
    cout <<"Number of Cols: ";
    cin >>n;

    for(int i = 1;i <= m;i++){
        for(int j = 1; j<=n;j++){
            cout<<"* ";
        }
        cout <<endl;
    }


}