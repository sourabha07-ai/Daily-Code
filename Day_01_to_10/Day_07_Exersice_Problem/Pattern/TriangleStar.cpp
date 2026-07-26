#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
   int num_str;
   cout <<"Number Of Star: ";
   cin >> num_str;
   
   for (int i = 1;i <=num_str ;i++){
       for (int j = 1;j <= i;j++){
           cout <<y <<" * "<<reset ;
       }
       cout <<endl;
   }
}