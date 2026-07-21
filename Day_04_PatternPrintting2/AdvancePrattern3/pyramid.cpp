#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
   int n;
   cout <<"Enter n: ";
   cin >> n;

   for(int i = 1;i<=n;i++){
    for(int j = 1; j <= n - i ;j++){
           cout <<"  ";
    }
    for(int k = 1;k<= 2* i-1;k++){
        cout <<g <<" *" <<reset  ;
    }
    cout <<endl;
   }

    return 0;
}