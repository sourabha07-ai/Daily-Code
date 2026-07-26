#include <iostream>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

int main()
{
  cout << g << "=====Section start======" << reset << endl;
  cout << y << "Factorial of Number:" << reset << endl;

  int num;
  cout << "Enter Number: ";
  cin >> num;
  int fact = 1;
  for (int i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  cout << "The factorial of " << num << " is " << g << fact << reset << endl;
  cout << g << "=====Section End======" << reset << endl;
  return 0;
}