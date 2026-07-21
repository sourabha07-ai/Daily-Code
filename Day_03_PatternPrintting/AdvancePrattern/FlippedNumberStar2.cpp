#include <iostream>
using namespace std;

int main(){
  int s;
  cout <<"Number of Star: ";
  cin >>s;

  for(int i = 1;i <= s;i++){
    for(int j = 1; j <= s + 1 - i;j++){
        cout <<i <<" ";
    }
    cout <<endl;
  }


}