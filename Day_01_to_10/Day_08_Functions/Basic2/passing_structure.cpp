#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


struct  car
  {
     string name;
     int year;
  };

void myCars(car c){
    cout << "Brand: " <<c.name <<endl <<"Year: " <<c.year <<endl; 
    cout <<g <<"________________" <<reset <<endl;
  }

int main(){
   car myCar1 = {"Volvo" , 2023};
   car myCar2 = {"BMW", 2021};
   car myCar3 = {"TATA", 2020};
   
   myCars(myCar1);
   myCars(myCar2);
   myCars(myCar3);
    return 0;
}