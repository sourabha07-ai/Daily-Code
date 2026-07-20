#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Enter n: ";
  cin >> n;

  int no_of_space = n - 1;
  int no_of_star = 1;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <=no_of_space ;j++){
        cout <<"  ";
    }
    for(int k = 1; k <= no_of_star ; k++){
        cout <<"* ";
    }
    no_of_space--;
    no_of_star += 2;
    cout << endl;
  }

  no_of_space = 1;
  no_of_star = 2 * n - 3;

  for(int i = 1; i <= n - 1 ; i++){
    for(int j = 1; j <= no_of_space;j++){
        cout <<"  ";
    }
    for(int k = 1; k <= no_of_star; k++){
        cout <<"* ";
    }
    no_of_space++;
    no_of_star -= 2;
    cout <<endl;
  }

    return 0;
}