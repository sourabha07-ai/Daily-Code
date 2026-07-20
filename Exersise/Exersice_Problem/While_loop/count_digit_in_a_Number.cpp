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