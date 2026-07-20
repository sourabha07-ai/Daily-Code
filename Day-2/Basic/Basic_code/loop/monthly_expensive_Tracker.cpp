#include <iostream>
using namespace std;

#define g "\033[32m"// green
#define reset "\033[0m" //reset


int main(){
    int expenses[5] ={200,300,500,320,340};
        int total_exp = 0 ;
        int highest_exp = 0 ;
        int highest_day_exp = 0 ;

         for(int i = 0; i < 5;i++){
            //* cout << expenses[i] << endl;
            total_exp = total_exp + expenses[i];
            if(expenses[i] > highest_exp){
                highest_exp = expenses[i];
                highest_day_exp = i + 1;
            }
         }

      /*Q-1.*/   cout <<g << "Total Expenses : " <<reset << total_exp <<endl;
      /*Q-2*/    cout <<g << "Highest Expenses: " <<reset << highest_exp <<endl;
      /*Q-3*/    cout <<g <<"Highest Expenses Day: " <<reset <<"day-"<< highest_day_exp << endl;
      /*Q-4*/    cout <<g << "Daily Expenses: " <<reset << total_exp / 5.0 <<endl;
                  cout <<g <<"Success!..." <<reset <<endl;
}
