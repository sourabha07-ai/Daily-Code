#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<string> names = {"Sourabha", "Puja", "Riya", "Priya"};

    //! LOOP
    cout << "Original Deque:\n";
    for (string name : names) {
        cout << name << " ";
    }
    cout << endl;

    //! Access elements
    cout << "\nUsing at(): " << names.at(0) << endl;
    cout << "Using []: " << names[2] << endl;

    //! Front and Back
    cout << "Front: " << names.front() << endl;
    cout << "Back : " << names.back() << endl;

    //! Add elements
    names.push_front("Sourabha Jena");
    names.push_back("Srimanta Jena");

    cout << "\nAfter push_front() and push_back():\n";
    for (string name : names) {
        cout << name << " ";
    }
    cout << endl;
    
    //! Remove the element front and back using .pop_front() and .pop_back() 
    names.pop_front();
    names.pop_back();
    
    for(string name: names){
        cout <<name <<" ";
    }
  cout <<endl;
    //! Size Of the Deque
    cout <<names.size() <<endl;//4

    //! Check empty or not
    cout <<names.empty() <<endl;//0

    //!Loop through the size()
    for(int i = 0 ; i < names.size() ;i++){
        cout <<names[i] << " " ;
    }
    return 0;
}