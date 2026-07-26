#include <iostream>
using namespace std;

int main(){
     struct car{
       string brand;
       string name;
       int year;
     }car1,car2,car3;
  

    car1.brand = "Volvo";
    car1.name = "X100";
    car1.year = 2002;

    car2.brand = "BMW";
    car2.name = "X7";
    car2.year = 2013;


    cout <<car1.brand <<endl;
    cout <<car1.name <<endl;
    cout <<car1.year <<endl;

    cout <<endl;

    cout << car2.brand <<endl;
    cout <<car2.name <<endl;
    cout <<car2.year <<endl;

    return 0;
}