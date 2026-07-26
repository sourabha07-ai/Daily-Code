#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Enter n: ";
  cin >> n;

for(int i = 1;i <= n;i++){
    for(int j = 1; j <= n - i;j++){ // n + 1 - i jagah n - i
        cout <<"  ";   
    }
    for(int k = 1; k<= i;k++){
        cout <<"* ";
    }
    cout <<endl;
}

//! Method 2
//   for(int i = 1; i<= a;i++){
//       for(int j = 1; j <= a;j++){
//          if((i + j) > a) cout <<"* ";
//          else cout <<"  ";
//       }
//       cout <<endl;
//   }

      return 0;
}