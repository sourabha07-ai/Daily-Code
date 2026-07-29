 #include <iostream>
 #include <string>
using namespace std;

int main() {
    int nums[] = {10, 20, 30, 40, 50};

    for (size_t i = 0; i < size(nums); i++) {
        cout << nums[i] << " ";
    }
}