#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Enter n: ";
  cin >> n;

  int no_of_space = n -1;
  int no_of_Star = 1;

  for(int i = 1;i <= 2 * n -1;i++){
    for(int j = 1; j <= no_of_space; j++){
        cout <<"  ";
    }
    for(int k = 1; k <= no_of_Star; k++){
        cout <<"* ";
    }
    if(i < n){
        no_of_space--;
        no_of_Star +=2;
    }else{
        no_of_space++;
        no_of_Star -= 2;
    }
    cout <<endl;
  }
    return 0;
}