#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue<int> numbers;

  numbers.push(12);
  numbers.push(13);
  numbers.push(14);
  numbers.push(15);
  numbers.push(16);

  //! Access the front and back Element
  cout <<numbers.front() <<endl;
  cout <<numbers.back() <<endl;

  //! Change the front the Elements
  numbers.front() = 23;
  cout <<numbers.front() <<endl;
  

  cout <<endl;
  //!Remove The Element
  queue<int> temp = numbers;
  temp.pop() ;
  cout <<temp.front() <<endl;

  //! Size Of Queue
  cout <<numbers.size() <<endl;

  //!Check Empty or not
  cout <<numbers.empty();//0
  
  
    return 0;
}