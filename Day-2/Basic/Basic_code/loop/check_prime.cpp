#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a Number:";
    cin >> num;
    int count = 0;

    if (num < 0)
    {
        cout << "Invalid Input:Please Valid Input.";
        return 0;
    }

    if (num == 0 || num == 1)
    {
        count = 100;
    }
    else if(num > 1){
         for (int i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
    }

    // this is for printing...
    if (count == 100 && num == 0 || num==1 )
    {
        cout << "Unique Number." << endl;
    }
    else if (count == 0)
    {
        cout << "This is Prime number." << endl;
    }
    else
    {
        cout << "This is Not Prime number" << endl;
    }

    return 0;
}