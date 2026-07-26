#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int num2 = 0;
    while (num != 0)
    {
        num2 = (num2 * 10) + num % 10;
        num = num / 10;
    }
    cout << num2 << endl;

    return 0;
}