# Pattern Printting HomeWork

## 1. Star Rectangle

```cpp
#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout <<"Number of Rows: ";
    cin >>m;
    cout <<"Number of Cols: ";
    cin >>n;

    for(int i = 1;i <= m;i++){
        for(int j = 1; j<=n;j++){
            cout<<"* ";
        }
        cout <<endl;
    }
}
```

### Output

```text
Number of Rows: 5
Number of Cols: 6
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
```

## 2.Star Square

```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Number of Star: ";
  cin >>n;

   for(int i = 1;i <= n;i++){
    for(int j = 1;j <= n;j++){
        cout <<"* ";
    }
    cout <<endl;
   }
}

```

### OutPut

```text
Number of Star: 5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *

```

## 3.Number Square

```cpp
#include <iostream>
using namespace std;

int main(){

  int num;
  cout <<"Number of Number: ";
  cin >>num;

   for(int i = 1;i <= num;i++){
    for(int j = 1;j <= num;j++){
        cout <<j <<" ";
    }
    cout <<endl;
   }
 
}

```

### Output (Number Square)

```text
Number of Number: 5
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 

```

## 4.Number Square 2

```cpp
#include <iostream>
using namespace std;

int main(){

  int num;
  cout <<"Number of Number: ";
  cin >>num;

   for(int i = 1;i <= num;i++){
    for(int j = 1;j <= num;j++){
        cout <<i <<" ";
    }
    cout <<endl;
   }
}

```

### Output (Number Square 2)

```text
Number of Number: 5
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
5 5 5 5 5 

```

## 5.Alphabet Square

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Number of alphabet: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
}
```

### Output (Alphabet Square)

```text
Number of alphabet: 4
A B C D 
A B C D 
A B C D 
A B C D 
```

## 6.alphbet Square 2

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Number of alphabet: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (char)(j + 96) << " ";
        }
        cout << endl;
    }
}

```

### Output(alphbet Square 2)

```text
Number of alphabet: 5
a b c d e 
a b c d e 
a b c d e 
a b c d e 
a b c d e
```

## 7.Alphabet Square 3

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Number of alphabet: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (char)(i + 64) << " ";
        }
        cout << endl;
    }

   
}

```

### Output(Alphabet Square 3)

```text
Number of alphabet: 4
A A A A 
B B B B 
C C C C 
D D D D 
```

## 8.Alphabet Square 4

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Number of alphabet: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
             if(i % 2 == 0){
                cout << (char)(i + 64) << " ";
             }else{
                cout << (char)(i + 96) << " ";
             }
        }
        cout << endl;
    }

}

```

### Output(Alphabet Square 4)

```text
Number of alphabet: 4
a a a a 
B B B B 
c c c c 
D D D D 
```

## 9.Star Triangle

```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Num of star: ";
  cin >>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout <<"* ";
    }
    cout <<endl;
  }
}

```

### Output(Star Triangle)

```text
Num of star: 5
* 
* * 
* * * 
* * * * 
* * * * * 

```

## 10.Number Triangle

```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Num of nums: ";
  cin >>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout <<j <<" ";
    }
    cout <<endl;
  }
}

```

### Output(Number Triangle)

```text
Num of nums: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
```

## 11.Number Triangle 2

```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Num of nums: ";
  cin >>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout <<i <<" ";
    }
    cout <<endl;
  }
}

```

### Output(Number Triangle 2)

```text
Num of nums: 6
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
```

## 12.Alphabet Triangle 2

```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Num of alphabet: ";
  cin >>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout << (char)(j+64) <<" ";
    }
    cout <<endl;
  }
}

```

### Output(Alphabet Triangle)

```text
Num of alphabet: 5
A 
A B 
A B C 
A B C D 
A B C D E 
```

## 13.Alphabet Triangle 2

```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Num of alphabet: ";
  cin >>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout << (char)(i+64) <<" ";
    }
    cout <<endl;
  }
}

```

### Output(Alphabet Triangle 2)

```text
Num of alphabet: 5
A 
B B 
C C C 
D D D D 
E E E E E 

```

## 14.Alpha Numeric Triangle

```cpp
#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Num of alphabet: ";
  cin >>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
         if(i % 2 == 0){
            cout << (char)(j+64) <<" ";
         }else{
            cout << j <<" "; 
         }
    }
    cout <<endl;
  }
}

```

### Output(Alpha Numeric Triangle)

```text
Num of alphabet: 5
1 
A B 
1 2 3 
A B C D 
1 2 3 4 5 

```

## 15.Star Triangle Horizontal Flipped

```cpp
#include <iostream>
using namespace std;

int main(){
  int s;
  cout <<"Number of Star: ";
  cin >>s;

  for(int i = 1;i <= s;i++){
    for(int j = 1; j <= s + 1 - i;j++){
        cout <<"* ";
    }
    cout <<endl;
  }
}

```

### Output()

```text
Number of Star: 5
* * * * * 
* * * * 
* * * 
* * 
* 
```

## 16.Flipped Number Triangle

```cpp
#include <iostream>
using namespace std;

int main(){
  int s;
  cout <<"Number of nums: ";
  cin >>s;

  for(int i = 1;i <= s;i++){
    for(int j = 1; j <= s + 1 - i;j++){
        cout <<j <<" ";
    }
    cout <<endl;
  }
}

```

### Output(Flipped Number Triangle)

```text
Number of nums: 5
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

```

## 17.Flipped Number Triangle 2

```cpp
#include <iostream>
using namespace std;

int main(){
  int s;
  cout <<"Number of Nums: ";
  cin >>s;

  for(int i = 1;i <= s;i++){
    for(int j = 1; j <= s + 1 - i;j++){
        cout <<i <<" ";
    }
    cout <<endl;
  }
}

```

### Output(Flipped Number Triangle 2)

```text
Number of Nums: 5
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 
```

## 18.Flipped Alphabet Triangle

```cpp
#include <iostream>
using namespace std;

int main(){
  int s;
  cout <<"Number of Alphabet: ";
  cin >>s;

  for(int i = 1;i <= s;i++){
    for(int j = 1; j <= s + 1 - i;j++){
        cout <<(char)(j + 64) <<" ";
    }
    cout <<endl;
  }
}
```

### Output(Flipped Alphabet Triangle)

```text
Number of Alphabet: 5
A B C D E 
A B C D 
A B C 
A B 
A 

```

## 19.Flipped Alphabet Triangle 2

```cpp
#include <iostream>
using namespace std;

int main(){
  int s;
  cout <<"Number of Star: ";
  cin >>s;

  for(int i = 1;i <= s;i++){
    for(int j = 1; j <= s + 1 - i;j++){
        cout <<(char) (i + 64)<<" ";
    }
    cout <<endl;
  }
}
```

### Output(Flipped Alphabet Triangle 2)

```text
Number of Star: 5
A A A A A 
B B B B 
C C C 
D D 
E 
```

## 20.Hollow Star Rectangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Number of Rows: ";
    cin >> m;

    cout << "Number of Cols: ";
    cin >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {

            if (i == 1 || i == m || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

```

### Output(Hollow Star Rectangle)

```text
Number of Rows: 5
Number of Cols: 6
* * * * * * 
*         * 
*         * 
*         * 
* * * * * * 
```

## 21.Star Plus

```cpp
#include <iostream>
using namespace std;

int main() {
    int o;
    cout << "Enter only Odd Nums: ";
    cin >> o;
 
    int mid = o/2+1;

    for (int i = 1; i <= o; i++) {
        for (int j = 1; j <= o; j++) {
              if(i==mid || j==mid){
                cout <<"*" <<" ";
              }else{
                cout <<"  ";
              }
        }
        cout << endl;
    }
}

```

### Output(Star Plus)

```text
Enter only Odd Nums: 5
    *     
    *     
* * * * * 
    *     
    * 
```

## 22.Star Cross

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter only Odd Nums: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
               if(i == j || i + j == n+1){
                cout <<"* ";
               }else{
                cout <<"  ";
               }
        }
        cout << endl;
    }
}

```

### Output(Star Cross)

```text
Enter only Odd Nums: 5
*       * 
  *   *   
    *     
  *   *   
*       * 

```

## 23.Floyd's Triangle

```cpp
#include <iostream>
using namespace std; 

int main(){
     int num;
     cout <<"Enter no. of rows: ";
     cin >>num;

     int a = 1;
     for(int i = 1; i <= num; i++){
        for (int j = 1; j <=i;j++){
           cout <<a++<<" ";
        }
        cout <<endl;
     }
}

```

### Output(Floyd's Triangle)

```text
Enter no. of rows: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
```

## 24.Odd Number Triangle

```cpp
#include <iostream>
using namespace std; 

int main(){
     int num;
     cout <<"Enter no. of rows: ";
     cin >>num;

     int a = 1;
     for(int i = 1; i <= num; i++){
        for (int j = 1; j <=i;j++){
            cout <<2 * j -1 <<" ";
        }
        cout <<endl;
     }
}

```

### Output(Odd Number Triangle)

```text
Enter no. of rows: 5
1 
1 3 
1 3 5 
1 3 5 7 
1 3 5 7 9 

```
