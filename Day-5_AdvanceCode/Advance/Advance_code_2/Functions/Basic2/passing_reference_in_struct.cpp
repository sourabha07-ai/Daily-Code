#include <iostream>
using namespace std;

struct car
{
    string name;
    int year;
};
 
void Cars (car &c){
    c.year++;
}
int main(){
    car myCar = {"Volvo", 2023};
    Cars(myCar);

    cout <<"Car Name: " <<myCar.name <<endl;
    cout <<"Year: " <<myCar.year <<endl;

    return 0;
}