# For Loop (10 Problems)

## 1.Print numbers from 1 to 10

```cpp
#include <iostream>
using namespace std;

int main(){
    int num = 10;
    for(int i = 1;i <= 10;i++){
        cout <<i <<" ";
    }
}
```

## 2.Print numbers from 10 to 1

```cpp
#include <iostream>
using namespace std;

int main(){
    // int num = 10;
    // for (int i = num;num--;i--){
    //     cout <<i <<" ";
    // }

    int num;
    cout <<"Enter a Number: ";
    cin>>num;
    // for(int i = 1;num >= i;num--){
    //     cout <<num <<" ";
    // }
    for (num;num>=1;num--){
        cout <<num <<" ";
    }
}
```

## 3.Print the multiplication table of a number

```cpp
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;

    for(int i = 1; i <= 10;i++){
        cout <<num <<" * " <<i <<" = " <<num * i <<endl;
    }


    return 0;
}
```

## 4.Find the sum of numbers from 1 to N

```cpp
#include <iostream>
using namespace std;
// Find the sum of numbers from 1 to N.
int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int sum = 0;
    
    for (int i = 1;i<=num;i++){
        sum = sum + i;
        if(i <= num){
           if(i==num){
              cout <<i << " = ";
           }else{
               cout <<i <<" + ";
           }
        }    
    }
    cout << sum;



    return 0;
}

```

## 5.Find the factorial of a number

```cpp
#include<iostream>
using namespace std;

// Find the factorial of a number.
int main(){
 int num;
 cout <<"Enter a Number: ";
 cin >> num;
  
 double fact = 1;
 for(int i = 1; i <= num ;i++){
    fact  = fact * i;
    if(i <= num){
        if(i==num){
            cout <<i <<" = ";
        }else{
            cout <<i <<" * ";
        }
    }
 }
 cout <<fact ;

    return 0;
}
```

## 6 . Print all even numbers from 1 to 100

```cpp
#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;
    
    cout <<"All Even Numbers:" <<endl;
    for(int i = 1;i <=num ;i++){
        if( i % 2 == 0){
            cout << i <<" ";
        }
    }

    return 0;
}
```

## 7.Print all odd numbers from 1 to 100

```cpp
#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;
    
    cout <<"All ODD Numbers:" <<endl;
    for(int i = 1;i <=num ;i++){
        if( i % 2 != 0){
            cout << i <<" ";
        }
    }

    return 0;
}

```

## 8.Print squares of numbers from 1 to N

```cpp
#include <iostream>
using namespace std;
// Print squares of numbers from 1 to N.
int main(){
    int num;
    cout <<"Enter a number: ";
    cin >>num;

    int squ;

    for(int i = 1;i <= num;i++){
        squ = i * i ;
        cout <<squ <<" ";
    }


    return 0;
}

```

## 9.Count numbers divisible by 3 from 1 to N

```cpp
#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >>num;

    int count = 0; 
    for(int i = 1;i <=num;i++){
        if(i % 3 == 0){
            cout <<i <<" ";
            count++;
        }
    }
    cout <<endl;
    cout <<"Count of 1 to " <<num <<" = " << count <<" numbers divisible by 3." ;


    return 0;
}

```

## 10 . Print this pattern

```text
*
**
***
****.
*****.
```

```cpp
#include <iostream>
using namespace std;

int main(){
   int num_str;
   cout <<"Number Of Star: ";
   cin >> num_str;
   
   for (int i = 1;i <=num_str ;i++){
       for (int j = 1;j <= i;j++){
           cout <<" * " ;
       }
       cout <<endl;
   }
}


```
