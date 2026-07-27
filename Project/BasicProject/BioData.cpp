#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

const int MAX = 100;

struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};

Student students[MAX];
int countStudent = 0;

//---------------------------
// Input Validation
//---------------------------
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int inputInt(string message) {
    int value;

    while (true) {
        cout << message;
        cin >> value;

        if (cin.fail()) {
            cout << "Invalid input! Enter numbers only.\n";
            clearInput();
        } else {
            return value;
        }
    }
}

float inputFloat(string message) {
    float value;

    while (true) {
        cout << message;
        cin >> value;

        if (cin.fail()) {
            cout << "Invalid input! Enter numbers only.\n";
            clearInput();
        } else {
            return value;
        }
    }
}

//---------------------------
// Grade
//---------------------------
char calculateGrade(float marks) {
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else
        return 'F';
}

//---------------------------
// Duplicate Roll Check
//---------------------------
bool isDuplicateRoll(int roll) {
    for (int i = 0; i < countStudent; i++) {
        if (students[i].rollNo == roll)
            return true;
    }
    return false;
}

//---------------------------
// Add Student
//---------------------------
void addStudent() {

    if (countStudent == MAX) {
        cout << "Student record is full.\n";
        return;
    }

    int roll;

    while (true) {
        roll = inputInt("Enter Roll Number: ");

        if (roll <= 0)
            cout << "Roll number must be positive.\n";
        else if (isDuplicateRoll(roll))
            cout << "Roll number already exists.\n";
        else
            break;
    }

    students[countStudent].rollNo = roll;

    clearInput();

    cout << "Enter Name: ";
    getline(cin, students[countStudent].name);

    while (true) {
        students[countStudent].age = inputInt("Enter Age: ");

        if (students[countStudent].age >= 5 &&
            students[countStudent].age <= 100)
            break;

        cout << "Age must be between 5 and 100.\n";
    }

    while (true) {
        students[countStudent].marks = inputFloat("Enter Marks (0-100): ");

        if (students[countStudent].marks >= 0 &&
            students[countStudent].marks <= 100)
            break;

        cout << "Marks must be between 0 and 100.\n";
    }

    countStudent++;

    cout << "\nStudent Added Successfully.\n";
}

//---------------------------
// Display
//---------------------------
void displayStudents() {

    if (countStudent == 0) {
        cout << "\nNo Records Found.\n";
        return;
    }

    cout << "\n";
    cout << left
         << setw(10) << "Roll"
         << setw(25) << "Name"
         << setw(10) << "Age"
         << setw(10) << "Marks"
         << setw(10) << "Grade"
         << endl;

    cout << string(65, '-') << endl;

    for (int i = 0; i < countStudent; i++) {

        cout << left
             << setw(10) << students[i].rollNo
             << setw(25) << students[i].name
             << setw(10) << students[i].age
             << setw(10) << students[i].marks
             << setw(10) << calculateGrade(students[i].marks)
             << endl;
    }
}

//---------------------------
// Search
//---------------------------
void searchStudent() {

    int roll = inputInt("Enter Roll Number: ");

    for (int i = 0; i < countStudent; i++) {

        if (students[i].rollNo == roll) {

            cout << "\nStudent Found\n";
            cout << "Roll No : " << students[i].rollNo << endl;
            cout << "Name    : " << students[i].name << endl;
            cout << "Age     : " << students[i].age << endl;
            cout << "Marks   : " << students[i].marks << endl;
            cout << "Grade   : " << calculateGrade(students[i].marks) << endl;

            return;
        }
    }

    cout << "Student Not Found.\n";
}

//---------------------------
// Update
//---------------------------
void updateStudent() {

    int roll = inputInt("Enter Roll Number: ");

    for (int i = 0; i < countStudent; i++) {

        if (students[i].rollNo == roll) {

            clearInput();

            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            while (true) {
                students[i].age = inputInt("Enter New Age: ");

                if (students[i].age >= 5 &&
                    students[i].age <= 100)
                    break;

                cout << "Invalid Age.\n";
            }

            while (true) {
                students[i].marks = inputFloat("Enter New Marks: ");

                if (students[i].marks >= 0 &&
                    students[i].marks <= 100)
                    break;

                cout << "Invalid Marks.\n";
            }

            cout << "\nStudent Updated Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

//---------------------------
// Delete
//---------------------------
void deleteStudent() {

    int roll = inputInt("Enter Roll Number: ");

    for (int i = 0; i < countStudent; i++) {

        if (students[i].rollNo == roll) {

            for (int j = i; j < countStudent - 1; j++)
                students[j] = students[j + 1];

            countStudent--;

            cout << "\nStudent Deleted Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

//---------------------------
// Main
//---------------------------
int main() {

    int choice;

    do {

        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        choice = inputInt("Enter Choice: ");

        switch (choice) {

        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}