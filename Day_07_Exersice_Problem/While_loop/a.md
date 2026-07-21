# while Loop (10 Problems)

## 1. Reverse a number

```cpp
#include <iostream>
using namespace std;

// Reverse a number
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin >> num;

   //One method 
    int rev = 0;
    while (num > 0){
        rev = (10 * rev) + num % 10;
        num = num /10; 
    }
    cout <<rev;

    //Aother Method
   int digit = 0;
   while(num > 0){
     digit = num % 10;
     num  = num / 10;
     if (digit < 9){
        cout <<digit <<"";
     }
   }
    
    return 0;
}
```

## 2. Count digits in a number

```cpp
#include <iostream>
using namespace std;

// Count digits in a number
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int count = 0;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    cout << count;

    return 0;
}
```

## 3. Sum digits of a number

```cpp
#include <iostream>
using namespace std;

// Sum digits of a number
int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >>num;

    int sum = 0;
    while(num > 0){
        sum = sum + (num % 10);
        num = num /10;
    }
    cout <<"Sum Of digits in Number: " <<sum <<endl; ;
    
    return 0;
}
```

## 4. Check palindrome number

```cpp
#include <iostream>
using namespace std;

// Check palindrome number
int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >> num;

    int original_num = num;
    int rev = 0;
    while(num > 0){
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    // cout <<rev;
    if (original_num == rev){
        cout <<original_num <<" this is Palindrome Number." <<endl;
    }else{
        cout <<"Not Palindrome" <<endl;
    }

    return 0;
}
```

## 5. Print digits of a number one by one

```cpp
#include <iostream>
using namespace std;

// Print digits of a number one by one
int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >> num;
     
     int rev = 0;
    int temp = num;

    // Reverse the number
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }

    // Print digits in original order
    while (rev > 0) {
        cout << rev % 10 << " ";
        rev = rev / 10;
    }

    return 0;
}
```

## 6. Find the product of digits

```cpp
#include <iostream>
using namespace std;

// Find the product of digits
int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;

    int mul = 1;

    while(num > 0){
        mul = mul * (num % 10);
        num = num /10;
    }
    cout <<mul <<" is product of digits"<<endl;

    return 0;
}

```

## 7. Find the largest digit in a number

```cpp
#include <iostream>
using namespace std;

//Find the largest digit in a number
int main(){
   int num;
   cout <<"Enter a Number: ";
   cin >>num;
   int largest_digit = 0;
   int digit;

   while(num > 0){
     digit = num % 10;
       if (digit > largest_digit){
          largest_digit = digit;
       }
     num  = num / 10; 
   }
   cout <<"Largest Digit "<<largest_digit <<endl;

    return 0;
}

```

## 8. Convert decimal to binary

```cpp
#include <iostream>
using namespace std;

// Convert Decimal to Binary
int main() {
    int num;
    cout << "Enter a Decimal Number: ";
    cin >> num;

    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    cout << "Binary = ";

    while (i > 0) {
        i--;
        cout << binary[i];
    }

    return 0;
}

```

## 9. Calculate power (e.g., 2⁵)

```cpp
#include <iostream>
using namespace std;

int main(){
  int base,exp;
  cout <<"Enter base: ";
  cin >> base;
  cout <<"Enter exponential: ";
  cin >> exp;
  
  int power = 1;
  int i = 1;

  while(i <= exp){
    power = power * base;
    i++;
  }
  cout <<base <<" Power of " <<exp <<" is " <<power <<endl;
    return 0;
}

```

## 10. Keep taking input until the user enters 0

```cpp
#include <iostream>
using namespace std;
 

//Keep taking input until the user enters 0
int main(){
    int num;

    while(true){
        cout <<"Enter number(0 to STOP):- " ;
        cin >>num;

        if(num == 0){
            break;
        }
        cout <<"Your number is: " <<num <<endl;
    }
    cout  <<"\033[32m Program is Ended! \033[0m";
  
    return 0;
}

```
