#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;
    
    cout  <<y <<"All Even Numbers:" <<reset <<endl;
    for(int i = 1;i <=num ;i++){
        if( i % 2 == 0){
            cout << i <<" ";
        }
    }

    return 0;
}