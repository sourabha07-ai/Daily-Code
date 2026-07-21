#include <iostream>
using namespace std;

#define g "\033[32m"
#define reset "\033[0m"

int main(){
   int count;
    cout <<g <<"Enter Count Number: " <<reset;
    cin >> count;

    for(int i = 1;i <= count;i++){
        cout << i <<" ";
    }

    return 0;
}