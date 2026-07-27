 #include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};

int main() {
    vector<Student> students = {
        {101, "Alice", 20, 89.5},
        {102, "Bob", 21, 92.0},
        {103, "Charlie", 19, 85.5}
    };

    cout << "+----------+----------------+------+----------+\n";
    cout << "|"
         << left << setw(10) << " Roll No"
         << "|" << setw(16) << " Name"
         << "|" << setw(6) << " Age"
         << "|" << setw(10) << " Marks"
         << "|\n";
    cout << "+----------+----------------+------+----------+\n";

    for (const Student &s : students) {
        cout << "|"
             << setw(10) << s.rollNo
             << "|" << setw(16) << s.name
             << "|" << setw(6) << s.age
             << "|" << setw(10) << fixed << setprecision(1) << s.marks
             << "|\n";
    }

    cout << "+----------+----------------+------+----------+\n";

    return 0;
}