#include <iostream>
using namespace std;

#define g "\033[32m"
#define reset "\033[0m"


int main(){
   int a,b;
   cout << "Enter your numbers: ";
   cin>>a >> b;

   int sum = a + b;
  cout <<g <<"sum is : "<< sum <<reset <<endl;





    return 0;
}
