#include <iostream>
using namespace std;

int numFunction(int a, int b){
    return a + b;
}

double numFunction(double a,double b){
    return a + b;
}
double numFunction(double a, double b,double c){
    cout << a + b + c <<endl;
}


int main(){
  int result_1 = numFunction(10,2);
  int result_2 = numFunction(10.2,23.4);
  numFunction(12.3,4.3,6.4);

  cout <<"Result-1: " << result_1 <<endl;
  cout <<"result-2: " << result_2 <<endl;

    return 0;
}