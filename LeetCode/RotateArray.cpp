#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int i, int j)
{
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> arr = {12, 13, 14, 15, 16, 17};
    int n = arr.size();

    cout << "array is : ";
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    int k;
    cout << "Want your number of index rotate: ";
    cin >> k;
    if (n == 0)
    {
        return 0;
    }
    k = k % n;

    // Step 1: Reverse whole array
    reverseArray(arr, 0, n - 1);

    // Step 2: Reverse first k elements
    reverseArray(arr, 0, k - 1);

    // Step 3: Reverse remaining elements
    reverseArray(arr, k, n - 1);

    cout << "final answer: ";
    for (int a : arr){
        cout << a << " ";
    }

    return 0;
}