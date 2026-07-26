#include <iostream>
using namespace std;

#define g "\033[32m"
#define r "\033[31m"
#define y "\033[33m"
#define b "\033[34m"
#define p "\033[35m"
#define reset "\033[0m"

int main(){
    double balance = 10000;
    double withdraw ;

    cout << g << "===== ATM SYSTEM =====" << reset << endl;
    cout << "Initial Balance: " <<g << balance <<reset << endl;

    while(true) {
        cout << "\n How much withdraw in ATM(enter 0 to 'Exit')" <<endl;
        cin >> withdraw;

         // Q-1 Exit the transactions
        if(withdraw == 0){
            cout << g <<"====Transaction stopped by user.====" <<reset <<endl;
            break;
        }
         //Q-1 invalid input
        if(withdraw < 0){
            cout <<r <<"Invalid amount! Try again." << reset <<endl;
            continue;
        }
        //Q-2 insufficient Balanace 
        if(withdraw > balance){
            cout << b <<"Insufficient balance!" <<reset << endl;
            cout << "Current Balance Is" <<g <<balance <<reset <<endl;
        }
        //Withdrawal Process
         else{
        balance = balance - withdraw;

        cout <<"Withdrawal Successfully" <<reset <<endl;
        cout <<"Withdrawal amount is: " <<g <<withdraw <<reset <<endl;
        cout <<"Remaining Balance is :" <<g << balance <<reset <<endl;
         } 
         
        // Stop if balance becomes 0
        if (balance ==0){
            cout << y <<"\nBalance is zero. ATM session ended." <<reset <<endl;
            break;
        }
        
    }
    cout << p <<"\nThank you for using ATM!" <<reset << endl;
    return 0;
}