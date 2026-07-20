#include <iostream>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"
/*
 !Note: "boolalpha" is not a data type. It is an I/O manipulator - a setting that changes how cout displays boolean values. When you use it, you are telling cout: "From now on, print booleans as true and false instead of 1 and 0."
  ...."noboolalpha"...
 */

int main(){
  bool is_dark = false;
  bool is_light = true;

  cout << boolalpha; //? enable printing "true"/"false"

  cout <<r <<!(is_dark) <<reset <<endl;
  cout <<y <<!is_light <<reset <<endl;

    return 0;
}