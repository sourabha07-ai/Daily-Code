# if-else Problems

## 1. Check even or Odd

```cpp
#include <iostream>
#include <string>
using namespace std;
#define g "\033[32m"
#define reset "\033[0m"

// Check whether a number is even or odd.

int main(){
   int num;
   cout <<"Enter a number : ";
   cin >> num;

   string check = (num == 0) ? "Number is zero."
                  :(num % 2 == 0 ) ? "Even"
                  :(num % 2 != 0 ) ? "Odd"
                  :"Invalid-input";
      cout <<g << check <<reset <<endl;            

    return 0 ;
}

```

## 2. Check leap Year

```cpp
#include <iostream>
using namespace std; 
/* A year is a leap year if:

1.It is divisible by 4, and
2.It is not divisible by 100, unless
3.It is also divisible by 400. */

int main(){
    int year;
     cout <<"Enter Year: ";
     cin >> year;

     if (year % 400 == 0){
         cout<<"leap year";
     }else if (year % 100 == 0){
          cout<<" not a leap year";
      }else if (year % 4 == 0){
          cout <<"leap year";
      }else{
          cout << "not a leap year";
      }
    return 0;
}

```

## 3. Check number positive negative or Zero

```cpp
#include <iostream>
#include <string>
using namespace std;
#define g "\033[32m"
#define reset "\033[0m"

  //Check if a number is positive, negative, or zero.
int main(){
   int n;
   cout <<"Enter a number: ";
   cin >> n;

   string message = (n > 0) ? "Positive"
                   :(n < 0) ? "Negative"
                   :(n == 0) ? "Zero"
                   : "Invalid-input. Nothing";
   cout <<g <<message <<reset <<endl;                

    return 0;
}
```

## 4. Checking Voting Eligibility

```cpp
#include <iostream>
using namespace std;

// Check voting eligibility (age ≥ 18).

int main(){
   int age;
   cout <<"Enter your age: ";
   cin >> age;

   if(age == 0 || age < 0 || age > 100){
      cout <<"Invalid Age."<<endl;
   }else if(age >= 18){
      cout <<"Eligibility for Vote." <<endl;
   }else{
      cout <<"Not Eligibility." <<endl;
   }

    return 0;
}
```

## 5. Check number divided by 5 and 11

```cpp
#include <iostream>
using namespace std;

int main(){
   //Check whether a number is divisible by 5 and 11.
   int num;
   cout <<"Enter number : ";
   cin >> num; 

   if(num == 0){
     cout <<"Number is Zero." <<endl;
   }else{
        if(num % 5 == 0 ){
           cout <<num << "divisible by 5" <<endl;
        }
        if(num % 11 == 0){
            cout<<num <<" divisible by 11"<<endl;
       } 
    }if(num % 5 == 0 && num % 11 == 0 && num != 0){
        cout <<num << " is divisible by 5 and 11" <<endl;
   }else{
        cout <<num <<" not divisible by 5 and 11" << endl;
   }
    return 0;
}
```

## 6. Find the largest in 3 Numbers

```cpp
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Enter n1: ";
    cin >> n1;

    cout << "Enter n2: ";
    cin >> n2;

    cout << "Enter n3: ";
    cin >> n3;

    // Check equality
    if (n1 == n2 && n2 == n3) {
        cout << "All numbers are equal" << endl;
    }
    else {
        if (n1 == n2)
            cout << n1 << " equal to " << n2 << endl;

        if (n2 == n3)
            cout << n2 << " equal to " << n3 << endl;

        if (n1 == n3)
            cout << n1 << " equal to " << n3 << endl;
    }

    // Find largest
    if (n1 > n2 && n1 >n3) {
        cout << "Largest number is " << n1 << endl;
    }
    else if (n2 > n1 && n2 > n3) {
        cout << "Largest number is " << n2 << endl;
    }
    else {
        cout << "Largest number is " << n3 << endl;
    }

    return 0;
}
```

## 7. Find the largest in two Numbers

```cpp
#include <iostream>
#include <string>
using namespace std; 
#define g "\033[32m"
#define reset "\033[0m"


int main(){
    int num_1,num_2;
    cout << "Enter first Number: ";
    cin >> num_1;
    cout << "Enter Second Number: ";
    cin >> num_2;

    string check = (num_1 == num_2) ? "Both are Same"
                   :(num_1 > num_2)  ? "First is greater than second" 
                   :"Second is greater than first";  
     cout <<g <<check <<reset << endl;
    return 0;
}
```

## 8. Find lowerCase and UpperCase

```cpp
#include <iostream>
using namespace std;

int main(){
   char ch;
   cout <<"Enter a Character: ";
   cin >>ch;

 if(ch >= 'A' && ch <= 'Z'){
       cout <<"UpperCase.";
   }else{
    cout <<"LowerCase";
   }   

    return 0;
}
```

## 9. Grade the Marks

```cpp
#include <iostream>
using namespace std;

//Grade calculator (A, B, C, D, F).
int main(){
    int marks;
    cout <<"Enter marks: ";
    cin >> marks;

      if(marks < 0 || marks > 100 ){
        cout <<"Invalid input" <<endl;
      }else if(marks == 100){
        cout << "Grade Excellent";
     }else if(marks >= 90 && marks < 100){
        cout<<"Grade A" <<endl;
     }else if(marks >= 80 && marks < 90){
        cout << "Grade B" <<endl;
     }else if(marks >= 70 && marks < 80){
        cout <<"Grade C" <<endl;
     }else if(marks >= 60 && marks < 70){
        cout <<"Grade D" <<endl;
     }else if(marks  >= 40 && marks < 60){
        cout <<"Grade D-2" <<endl;
     }else{
        cout << "Grade F(Fail)" <<endl;
     }
    
    

    return 0;
}
```

## 10. Check whether a character is a vowel or consonant

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "Vowel";
    } else {
        cout << "Consonant";
    }

    return 0;
}


```

## 11. Check whether a number is a 3-digit number

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
        cout << "It is a 3-digit number.";
    } else {
        cout << "It is not a 3-digit number.";
    }

    return 0;
}
```
