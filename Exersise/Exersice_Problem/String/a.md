# String (10 Problems)

## 1. Input and print a string

```cpp
#include <iostream>
#include <string>
using namespace std;

// Input and print a string
int main(){
  string first_name,last_name;
  cout <<"Enter First name: ";
  cin >> first_name;

  cin.ignore();

  cout <<"Enter last_name: ";
  cin >>last_name;

  cout <<first_name <<" " <<last_name <<endl;

    return 0;
}

```

## 2. Find the length of a string

```cpp
#include <iostream>
#include <string>
using namespace std;

//Find the length of a string
int main(){
   string name;
   cout <<"Enter name: ";
   getline(cin,name);
   
   int count = 0;

    for (char ch : name) {
        if (ch != ' ') {
            count++;
        }
    }

    cout << "Length of String (without spaces): " << count << endl;

    return 0;
}

```

## 3. Count vowels in a string

```cpp
#include <iostream>
#include<string>
using namespace std; 

// Count vowels in a string
int main(){
    string str;
    cout <<"Enter string: ";
    getline(cin,str);

     int count = 0;

    for(char ch:str){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u' || ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'U'){
            count++;
        } 
    }
    cout <<count <<" Vowel present is " <<str <<"." <<endl;
  

    return 0;
}

```

## 4. Count consonants in a string

```cpp
#include <iostream>
#include <string>
using namespace std; 

// Count consonants in a string

int main(){
    string str;
    cout <<"Enter a String: ";
    getline(cin,str);

    int count = 0;

  for(char ch : str){
      if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
          if (ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u' 
          || ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'U'){  
                    continue;
              }    
            else{
                       count++;
        }
    }
}
    cout <<count;
  
    return 0;
}

```

## 5. Count spaces in a string

```cpp
#include <iostream>
#include <string>
using namespace std; 

//Count spaces in a string

int main(){
    string str;
    cout <<"Enter a string: ";
    getline(cin,str);

    int count = 0;

    for(char ch : str ){
        if(ch == ' '){
            count++;
        }
    }
   cout <<"Present Space: "<<count <<endl;
  
    return 0;
}
```

## 6.Reverse a string

```cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  cout <<"Enter your String: ";
  getline(cin,str);
  
  for(int i = str.size() - 1;i >= 0 ;i--){
     cout <<str.at(i) <<" ";
  }

    return 0 ;
}

```

## 7.Check palindrome string

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a String: ";
    cin >> str;

    int left = 0;
    int right = str.size() - 1;

    bool isPalindrome = true;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}


```

## 8.Convert string to uppercase

```cpp
 #include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a String: ";
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A'); // or str[i] -= 32;
        }
    }

    cout << "Uppercase: " << str;

// with toupper() method using <cctype>
#include <iostream>
#include <string>
#include <cctype>
    using namespace std;

    int main()
    {
        string str;

        cout << "Enter a String: ";
        getline(cin, str);

        for (int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
        }

        cout << "Uppercase String: " << str;

        return 0;
    }

    return 0;
}

```

## 9.Convert string to lowercase

```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;

    cout << "Enter a String: ";
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
    }

    cout << "Lowercase: " << str;

    return 0;
}

```

## 10.Count occurrences of a character

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a String: ";
    getline(cin, str);

    cout << "Enter Character: ";
    cin >> ch;

    int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "'" << ch << "' occurs " << count << " times.";

    return 0;
}

```
