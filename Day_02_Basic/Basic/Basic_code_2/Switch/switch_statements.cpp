#include <iostream>
using namespace std;

#define r "\033[31m"
#define reset "\033[0m"

int main()
{
       int day;
       cout << "Type (1 to 7): ";
       cin >> day;
       if (day < 1 || day > 7)
       {
              cout << r << "invalid Input" << reset;
       }

       switch (day)
       {
       case 1:
              cout << "Sunday";
              break;
       case 2:
              cout << "Monday";
              break;
       case 3:
              cout << "Tuesday";
              break;
       case 4:
              cout << "Wednesday";
              break;
       case 5:
              cout << "Thuseday";
              break;
       case 6:
              cout << "Friday";
              break;
       case 7:
              cout << "Saturday";
              break;
       }
       return 0;
}