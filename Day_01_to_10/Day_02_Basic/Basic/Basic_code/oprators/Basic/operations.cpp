#include <iostream>
#define bb "\033[30m" //black
#define r "\033[31m"//red
#define y "\033[33m"//yellow
#define b "\033[34m"//blue
#define p "\033[35m"//purple
#define g "\033[32m"// green
#define reset "\033[0m" //rest
using namespace std; 


int main(){
      int num1,num2;
      cout << "Enter number:";
      cin >> num1; 
      cout << "Enter second number:";
      cin >> num2;

      cout << g << "Adiition Of" << reset <<" " << num1 << " and " <<num2 <<" = " <<(num1 + num2) << endl;
      cout << p << "Substrction Of" << reset <<" " << num1 << " and " <<num2 <<" = " <<(num1 - num2) << endl;
      cout << y << "Multiplication Of" << reset <<" " << num1 << " and " <<num2 <<" = " <<(num1 * num2) << endl;
      cout << b << "Division Of" << reset <<" " << num1 << " and " <<num2 <<" = " <<(num1 / num2) << endl;
      cout << bb << "Division Of" << reset <<" " << num1 << " and " <<num2 <<" = " <<(num1 % num2) << endl;
       
      // Color Terminal
       cout << "\033[1;32mBold Green Text\033[0m" << endl;
       cout << "\033[41mWhite text on Red Background\033[0m" << endl;
    return 0;
}