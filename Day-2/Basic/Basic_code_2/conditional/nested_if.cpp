#include <iostream>
using namespace std;

#define g "\033[32m"
#define r "\033[31m"
#define reset "\033[0m"

int main(){
    int x = 20;
    int y = 30;

    int num_1 = 12;
    int num_2 = 31;

    if (x > num_1){
        if(y > num_2){
            cout << x <<" is greater than " <<num_1 << endl;
            cout <<y <<" is also greater than  "<<num_2 <<endl; 
        }else{
            cout <<r <<"Nothing" <<reset <<endl;
        }
    }

    int age = 20;
bool isCitizen = true;

if (age >= 18) {
  cout << "Old enough to vote.\n";

  if (isCitizen) {
    cout << "And you are a citizen, so you can vote!\n";
  } else {
    cout << "But you must be a citizen to vote.\n";
  }
} else {
  cout << "Not old enough to vote.\n";
}

    return 0;
}