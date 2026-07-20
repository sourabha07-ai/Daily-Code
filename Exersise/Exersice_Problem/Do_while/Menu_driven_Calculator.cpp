#include <iostream>
#include<limits>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define b "\033[34m"
#define p "\033[35m"
#define reset "\033[0m"


//Menu-driven calculator (+, -, *, /)
int main(){
  int choice;
  double num1,num2;

  do{
    cout <<y <<"\n-----Calculation-----" <<reset <<endl;
  
    cout <<"Enter: "<<y <<"1."<<reset <<"Addition(+)";
    cout <<" "<<y <<"2."<<reset <<"Substraction(-)";
    cout <<" "<<y <<"3."<<reset <<"Multiplication(*)";
    cout <<" "<<y <<"4."<<reset <<"Division(/)";
    cout <<" "<<y <<"5."<<reset <<b <<"Exit Code." <<reset <<endl;
    cout <<y <<"--------------------------------" <<reset <<endl;

    cout <<"Enter your Choice: ";

    while(!(cin >> choice)){
        cout <<r <<"Invalid Input!" <<reset <<endl;
        cout <<p <<"Enter again(1 to 5): "<<reset;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    if (choice >= 1 && choice <=4){
          switch(choice){
            case 1 :
               cout <<g <<"-----------Addition-----------" <<reset <<endl;
               break;
            case 2 :
               cout <<g <<"---------Substraction-----------" <<reset <<endl;
               break;
            case 3:
               cout <<g <<"---------Multiplication-----------"<<reset <<endl;
               break;
            case 4:
               cout <<y <<"---------Division-------------" <<reset <<endl;
               break;      
          }

        cout <<"Enter First Number: ";

        while(!(cin >> num1)){
            cout <<r <<"Invalid Input!" <<reset <<g <<"Enter a Valid Number: "<<reset;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout <<"Enter a Second Number:" ;
        while(!(cin >> num2 )){
             cout <<r <<"Invalid Input!" <<reset <<g <<"Enter a Valid Number: " <<reset;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (choice)
        {
        case 1:
            cout <<g <<"Addition: " <<reset <<num1 <<" + " <<num2 <<" = " <<p <<num1 + num2 <<reset <<endl;
            break;
        
        case 2:
            cout <<g <<"Substraction: " <<reset <<num1 <<" - " <<num2 <<" = " <<p <<num1 - num2 <<reset <<endl;
            break;
        
        case 3:
            cout <<g <<"Multiplication: " <<reset <<num1 <<" * " <<num2 <<" = " <<p <<num1 * num2 <<reset <<endl;
            break;
        case 4:
            if(num2 == 0){
                cout <<r <<"Error!"  <<reset <<endl;
            }else{
                cout <<g <<"Division: " <<reset <<num1 <<" / " <<num2 <<" = " <<p << num1 / num2 <<reset <<endl;
            }      
            break;
        }
    }
    else if (choice == 5){
        cout <<y <<"Thank You!" <<reset <<endl;
    }else{
        cout <<r <<"Invalid Choice!!!" <<reset <<endl;
    }
  }while(choice != 5);
    
}