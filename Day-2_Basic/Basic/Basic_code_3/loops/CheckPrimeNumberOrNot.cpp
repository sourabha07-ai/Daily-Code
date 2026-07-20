#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Enter a Number(prime or not): ";
  cin >> n;

  bool flag = false; //false means prime

  for(int i = 2; i <=n-1 ; i++){
     if(n % i == 0){
        flag = true;
        break;
     }
  }
  if(flag == true) cout << "Composite Number.";
  else cout <<"Prime Number.";

    return 0;
}