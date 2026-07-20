#include <iostream>
#include <map>
using namespace std;
#define r "\033[31m"
#define y "\033[33m"
#define reset "\033[0m"

int main()
{
  map<string, int> people = {
      {"Sourabha", 23},
      {"Puja", 22},
      {"Barsha", 21}};

  cout << y << "Using index value" << reset << endl;
  cout << "Sourabha age Is: " << people["Sourabha"] << endl;
  cout << "Puja Age is: " << people["Puja"] << endl;
  cout << "Barsha Age is: " << people["Barsha"] << endl;

  cout << endl;
  //  using at() function

  cout << y << "Using at() Function. " << reset << endl;
  cout << "Sourabha age is " << people.at("Sourabha") << endl;
  cout << "Puja age is " << people.at("Puja") << endl;

  cout << endl;
  // Change the value

  cout << y << "Change the Value." << reset << endl;
  people["Barsha"] = 23;
  cout << "Update \"Barsha\" age is " << people["Barsha"] << endl;

  int value = people.at("Puja") = 24;
  cout << "Update \"Puja\" age is " << people.at("Puja") << endl;
  cout << "Update \"Puja\" age is " << value << endl;

  cout << endl;
  // Add The Value
  cout << y << "Add New Vaule" << reset << endl;

  people["Arati"] = 54;
  int value2 = people["Subham"] = 16;
  cout << "New \"Arati\" age is " << people["Arati"] << endl;
  cout << "New \"Subham\" age is " << value2 << endl;

  cout << endl;
  // Add value Using insert() function
  cout << y << "Using insert() Function" << reset << endl;

  people.insert({"Abhijit", 32}); // alaways first one
  people.insert({"Abhijit", 33});
  cout << "New \"Abhijit \" age is " << people.at("Abhijit") << endl;

  cout << endl;
  // Remove element by Using erase() function
  cout << y << "Remove element by using erase() function." << reset << endl;
  people.erase("Barsha");
  // cerr << r << people.at("Barsha") << reset << endl;

  cout << endl;
  // Find size of a Map, empty or not and check key exist or not
  cout << y << "Find size of a Map, empty or not and key exist ir not " << reset << endl;

  cout << "Size of people: " << people.size() << endl;
  cout << "Empty or Not (0/1): " << people.empty() << endl; // not empty

  cout << "Exist key or not (0/1): " << people.count("Sourabha") << endl; // exist

  cout << endl;
  // Using LOOP
  cout << y << "Using looping print all keys and values." << reset << endl;

  for (auto person : people)
  {
    cout << person.first << "'s age is " << person.second << endl;
  }

  cout << endl;
  // Reverse order
  cout << y << "Reverse order using greater<string> " << reset << endl;
  map<string, int, greater<string>> people2 = {
      {"Sourabha", 23},
      {"Puja", 22},
      {"Barsha", 21}};
  for (auto person : people2)
  {
    cout << person.first << "'s age is: " << person.second << endl;
  }

  cout << endl;
  // Remove map from all elements using clear() function
  cout << y << "Remove all elements using clear() function" << reset << endl;

  people2.clear();
  cout << people2.count("Sourabha") << endl;

  return 0;
}