#include <iostream>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

int main()
{
    cout << g << "=====Section Start=====" << reset << endl;
    cout << y << "Sum of First N Numbers:" << reset << endl;

    int num;
    cout << "Enter a Number: ";
    cin >> num;
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is " << sum << endl;

    cout << g << "=====Section End=====" << reset << endl;
    return 0;
}