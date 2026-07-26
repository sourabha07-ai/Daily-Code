#include <iostream>
using namespace std;

int main(){
  int s;
  cout <<"Number of Alphabet: ";
  cin >>s;

  for(int i = 1;i <= s;i++){
    for(int j = 1; j <= s + 1 - i;j++){
        cout <<(char)(j + 64) <<" ";
    }
    cout <<endl;
  }


}