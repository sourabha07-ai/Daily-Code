#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
    //initial my name
   string myName = "Sourabha Jena";
   cout <<typeid(myName).name() <<" -> String"  << endl;
   cout <<myName <<endl;

   //access the string
   cout<<" Character 1 is "<<myName[0] <<endl;
   cout<<" Character 2 is "<<myName[1] <<endl;
   cout<<" Character 3 is "<<myName[2] <<endl;
   cout<<" Character 4 is "<<myName[3] <<endl;
   cout<<" Character 5 is "<<myName[4] <<endl;
   cout<<" Character 5 is "<<myName[5] <<endl;
   cout<<" Character 7 is "<<myName[6] <<endl;
   cout<<" Character 8 is "<<myName[7] <<endl;
   cout<<" Character 9 is "<<myName[8] <<endl;
   cout<<" Character 10 is "<<myName[9] <<endl;
   cout<<" Character 11 is "<<myName[10] <<endl;
   cout<<" Character 12 is "<<myName[11] <<endl;
   cout<<" Character 13 is "<<myName[12] <<endl;
   cout<<" Character 14 is "<<myName[13] <<endl;//space
   cout<<" Character 15 is "<<myName[-1] <<endl;//not include
   cout<<" Character 16 is "<<myName[-2] <<endl;//not valid


   cout <<"Character of Last of String: " << myName[myName.length() - 1] <<endl;









    return 0;
}