#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x > 3 || y < 4); // returns true (1) because one of the conditions are true (5 is greater than 3)
  return 0;
}
