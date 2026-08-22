/*Complex Array Rotation. Given an array of size N, first right-rotate the array by X
positions, and then left-rotate the resulting array by Y positions. Write an optimal O(N) 
approach.
Constraints: 1 ≤ N ≤ 105, 0 ≤ X,Y ≤ 109, −109 ≤ arr[i] ≤ 109.
Sample Input: N = 5, arr = {1, 2, 3, 4, 5}, X = 2, Y = 1
Sample Output: {5, 1, 2, 3, 4}
Explanation: Right by 2 gives {4, 5, 1, 2, 3}. Then left by 1 gives 
{5, 1, 2, 3, 4}.
*/
#include <iostream>
using namespace std;


int main(){
    int n;
    cout <<"Enter size of array: ";
    cin >> n;

     int arr[n];
    for(int i = 0; i < n;i++){
        cout <<"Enter " <<i <<" index: ";
        cin >> arr[i];
    }
    cout <<"original array: ";
    for(int a:arr){
        cout <<a <<" ";
    }

    cout <<endl;
    cout <<"Rotate array: ";
    for(int i = 0; i < n;i++){
        swap(arr[i],arr[n-1]);
        cout << arr[i] <<" ";
    }





    return 0;

}