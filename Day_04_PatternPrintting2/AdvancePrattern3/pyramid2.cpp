#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"input: ";
  cin >> n;

  int no_of_Space = n-1;
  int no_of_Star = 1;

  for(int i = 1; i <= n;i++){
    for(int j = 1; j <= no_of_Space ; j++){
        cout <<"  ";
    }
    for(int j = 1;j <= no_of_Star ; j++){
        cout <<"* ";
    }
    no_of_Space--;
    no_of_Star += 2;
    cout <<endl;
  }


    return 0;
}