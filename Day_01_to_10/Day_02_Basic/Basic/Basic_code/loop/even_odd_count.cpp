#include <iostream>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main()
{
    int n, num;
    cout << "Enter the how many numbers : ";
    cin >> n;

    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Number " <<y << i <<reset << ":";
        cin >> num;
        if (num % 2 == 0)
            even = even + 1;
        else
            odd = odd + 1;
    }
    cout << "Even Numbers = " <<g <<even <<reset << endl;
    cout << "Odd Numbers = " <<g <<odd <<reset << endl;

    return 0;
}