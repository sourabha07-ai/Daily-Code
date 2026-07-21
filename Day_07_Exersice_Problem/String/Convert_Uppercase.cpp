#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a String: ";
    getline(cin, str);

    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A'); // or str[i] -= 32;
        }
    }

    cout << "Uppercase: " << str;

// with toupper() method using <cctype>
// #include <iostream>
// #include <string>
// #include <cctype>
//     using namespace std;

//     int main(){
//         string str;

//         cout << "Enter a String: ";
//         getline(cin, str);

//         for (int i = 0; i < str.size(); i++)
//         {
//             str[i] = toupper(str[i]);
//         }

//         cout << "Uppercase String: " << str;

//         return 0;
//     }

    return 0;
}