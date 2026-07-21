#include <iostream>
using namespace std;

int main() {
    int o;
    cout << "Enter only Odd Nums: ";
    cin >> o;
 
    int mid = o/2+1;

    for (int i = 1; i <= o; i++) {
        for (int j = 1; j <= o; j++) {
              if(i==mid || j==mid){
                cout <<"*" <<" ";
              }else{
                cout <<"  ";
              }
        }
        cout << endl;
    }

    return 0;
}