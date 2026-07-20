#include <iostream>
using namespace std;

int main(){
     struct student{
        string name;
        int age;
        char grade; 
     }s1,s2,s3;

     s1.name = "Sourabha Jena";
     s1.age = 23;
     s1.grade = 'A';

     cout << s1.name <<endl;
     cout << s1.age <<endl;
     cout <<s1.grade <<endl;

     cout <<endl;

     s2.name = "Puja Maity";
     s2.age = 22;
     s2.grade = 'B';

     cout <<s2.name <<endl;
     cout << s2.age <<endl;
     cout << s2.grade <<endl;

     cout <<endl;

     s3.name = "Srikant Jena";
     s3.age = 45;
     s3.grade = 'C';

     cout <<s3.name <<endl;
     cout <<s3.age <<endl;
     cout <<s3.grade <<endl;


    return 0;
}