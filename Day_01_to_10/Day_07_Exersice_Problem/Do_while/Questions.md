# do-while Loop (10 Problems)

## 1.Print numbers from 1 to 10

```cpp
#include <iostream>
using namespace std;
//1.Print numbers from 1 to 10
int main(){
 int num = 1;
 do{
    cout << num <<" ";
    num++;
 }while(num <= 10);

    return 0;
}

```

## 2.Print numbers from 10 to 1

```cpp
#include <iostream>
using namespace std;

//Print numbers from 10 to 1
int main(){

    int num = 10;
    do{
        cout <<num <<" ";
        num--;
    }while(num > 0);

    return 0
}

```

## 3.Menu-driven calculator (+, -, *, /)

```cpp
#include <iostream>
#include<limits>
using namespace std;

//Menu-driven calculator (+, -, *, /)
int main(){
  int choice;
  double num1,num2;

  do{
    cout <<"\n-----Calculation-----" <<endl;
  
    cout <<"Enter:-1 for Addition(+)" <<endl;
    cout <<"Enter:-2 for Substraction(-)" <<endl;
    cout <<"Enter:-3 for Multiplication(*)" <<endl;
    cout <<"Enter:-4 for Division(/)" <<endl;
    cout <<"Enter:-5 for Exit Code." <<endl;
    cout <<"--------------------------------" <<endl;

    cout <<"Enter your Choice: ";

    while(!(cin >> choice)){
        cout <<"Invalid Input!"<<endl;
        cout <<"Enter again(1 to 5): ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    if (choice >= 1 && choice <=4){
        cout <<"Enter First Number: ";
        while(!(cin >> num1)){
            cout <<"Invalid Input!" <<"Enter a Valid Number: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout <<"Enter a Second Number:" ;
        while(!(cin >> num2 )){
             cout <<"Invalid Input!" <<"Enter a Valid Number: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (choice)
        {
        case 1:
            cout<< "Addition: " <<num1 + num2 <<endl;
            break;
        
        case 2:
            cout <<"Substraction: " <<num1 - num2 <<endl;
            break;
        
        case 3:
            cout <<"Multiplication: " <<num1 * num2 <<endl;
            break;
        case 4:
            if(num2 == 0){
                cout <<"Error!" <<endl;
            }else{
                cout <<"Division: " << num1 / num2 <<endl;
            }      
            break;
        }
    }
    else if (choice == 5){
        cout <<"Thank You!" <<endl;
    }else{
        cout <<"Invalid Choice!!!" <<endl;
    }
  }while(choice != 5);
    return 0;
}

```

## 4.ATM simulation.\

```cpp
#include <iostream>
#include <limits>
using namespace std;

int main() {
    double balance = 5000.0;
    int choice;

    do {
        cout << "\n==============================\n";
        cout << "         ATM SIMULATION\n";
        cout << "==============================\n";
        cout << "Current Balance: Rs. " << balance << endl;
        cout << "------------------------------\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "------------------------------\n";
        cout << "Enter your choice: ";

        while (!(cin >> choice)) {
            cout << "Invalid input! Enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {

        case 1:
            cout << "\nCurrent Balance = Rs. " << balance << endl;
            break;

        case 2: {
            double deposit;

            cout << "Enter deposit amount: Rs. ";

            while (!(cin >> deposit) || deposit <= 0) {
                cout << "Invalid amount! Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            balance += deposit;

            cout << "Rs. " << deposit << " deposited successfully.\n";
            cout << "New Balance = Rs. " << balance << endl;

            break;
        }

        case 3: {
            double withdraw;

            cout << "Enter withdrawal amount: Rs. ";

            while (!(cin >> withdraw) || withdraw <= 0) {
                cout << "Invalid amount! Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (withdraw > balance) {
                cout << "Insufficient Balance!\n";
            }
            else {
                balance -= withdraw;
                cout << "Rs. " << withdraw << " withdrawn successfully.\n";
                cout << "Remaining Balance = Rs. " << balance << endl;
            }

            break;
        }

        case 4:
            cout << "\nThank you for using our ATM.\n";
            break;

        default:
            cout << "\nInvalid choice! Please select 1-4.\n";
        }

    } while (choice != 4);

    return 0;
}



```

## 5.Guess the secret number

```cpp
#include <iostream>
using namespace std;

int main(){
   int guess = 9;
   int num;

   do{
    cout <<"Enter a Secret Number: ";
    cin >> num;

    if(guess != num){
        cout <<"Wrong Answer! Try again: "<<endl; 
    }
   }while(guess != num);

    cout <<"Congratulation..." <<endl;

    return 0;
}

```

## 6.Keep asking for password until correct

```cpp
#include <iostream>
#include <string>
using namespace std;


int main(){
  string pass_code = "Sourabha@1973";
  string pass_word;

  do{
    cout <<"Enter your Password: ";
    cin >>pass_word;

    if (pass_word != pass_code){
        cout <<"Wrong Password! try again: ";
    }

  }while(pass_word != pass_code);

  cout<<"Access Granted!"<<endl;

    return 0;
}

```

## 7.Print multiplication table

```cpp
#include <iostream>
using namespace std;

//Print multiplication table
int main(){
  int num;
  cout <<"Enter a Number for Multiplication Table: ";
  cin >>num;

  int i  = 1;

  do{
    cout << num  <<" * " << i << " = " <<num * i <<endl;
    i++;
  }while(i <= 10);

    return 0;
}

```

## 8.Sum numbers until user enters 0

```cpp
#include <iostream>
using namespace std;

int main (){
 double num1,sum = 0 ;

 do{
    cout <<"Enter number: ";
    cin >>num1 ;
    
    sum = sum + num1;
      
    }
 while(num1 != 0);
 
 cout <<"Sum is : " <<sum <<endl;
 cout <<"Thank You! " <<endl;

    return 0;
}


```

## 9.Find factorial

```cpp
#include <iostream>
using namespace std;

//Find factorial
int main(){
   int num;
   cout <<"Enter a Number: ";
   cin >>num ;

   int fact = 1;

   do{
       fact = fact * num;
       num--;

   }while(num >= 1);

   cout <<"Factorial is " <<fact <<endl;

    return 0;
}

```

## 10.Repeat program until user chooses Exit

```cpp
#include <iostream>
using namespace std;

int main() {

    int choice;

    do {

        cout << "\n===== MENU =====\n";
        cout << "1. Say Hello\n";
        cout << "2. Show Number\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Hello!";
                break;

            case 2:
                cout << "Number = 100";
                break;

            case 3:
                cout << "Goodbye!";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 3);

    return 0;
}

```
