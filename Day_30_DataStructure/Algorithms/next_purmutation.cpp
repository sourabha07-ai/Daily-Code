#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // next_permutation()
    // Generates the next lexicographical permutation.

    vector<int> v = {1, 2, 3, 4, 5, 6};

    next_permutation(v.begin(), v.end());

    for (int x : v) cout << x << " ";

        cout <<endl;
    //         prev_permutation()
    // Generates the previous permutation.

    vector<int> v1 = {3, 2, 1};

    prev_permutation(v1.begin(), v1.end());

    for (int x : v1)
        cout << x << " ";
}