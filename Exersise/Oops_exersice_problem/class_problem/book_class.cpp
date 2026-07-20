#include <iostream>
#include <string>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

class book_class{  
       public:
       string title;
       string author;
       int year;
};

void print(book_class bc){
  cout <<"Name: " << bc.title <<endl;
  cout <<"Author: "<<bc.author <<endl;
  cout <<"Year: " <<bc.year <<endl;
}
 int main(){
     book_class bc_1;
bc_1.title = "IKIGAI";
bc_1.author = "Francesc Miralles";
bc_1.year = 2023;
 

      book_class bc_2;
  bc_2.title = "SAMAYA";
  bc_2.author = "Achayar Prasant";
  bc_2.year = 2025;
  
  print(bc_1);
  cout <<g <<"------------------" <<reset <<endl;
  print(bc_2);

    return 0;
 }
 
