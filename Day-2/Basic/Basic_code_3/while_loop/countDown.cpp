#include <iostream>
using namespace std;

int main(){
   int count_down ;
   cout <<"Countdown Number: ";
   cin >> count_down;

   while(count_down >= 0){
      cout << count_down <<endl;
      count_down--;
   }
    return 0;
}