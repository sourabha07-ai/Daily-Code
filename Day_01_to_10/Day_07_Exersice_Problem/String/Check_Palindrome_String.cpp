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