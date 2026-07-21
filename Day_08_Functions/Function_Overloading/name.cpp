#include <iostream>
using namespace std;

void greet() {
  cout << "Hello!";
}

void greet(string name) {
  cout << "Hello, " << name;
}

int main() {
  greet();
  cout <<endl;
  greet("World!");
  return 0;
}