 #include <iostream>
#include <iomanip>

using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define r "\033[31m"
#define reset "\033[0m"


 
char gradeCalculate(double avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)
        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int count;
    double sum = 0, mark;
 
    do {
        cout << "Enter number of subjects (1-6): ";
        cin >> count;

        if (count < 1 || count > 6)
            cout <<r << "Invalid!" <<reset << " Please enter a number between 1 and 6.\n\n";

    } while (count < 1 || count > 6);

    
    for (int i = 1; i <= count; i++) {

        do {
            cout << "Subject " << i << ": ";
            cin >> mark;

            if (mark < 0 || mark > 100)
                cout <<r <<"Invalid!" <<reset << "Marks must be between 0 and 100." <<endl;

        } while (mark < 0 || mark > 100);

        sum += mark;
    }

    // Calculate average
    double average = sum / count;

    // Display result
    cout << fixed << setprecision(2);
    cout << "\nAverage Mark: " <<g << average <<reset <<" %" << endl;
    cout << "Grade: " <<y << gradeCalculate(average) <<reset << endl;

    return 0;
}