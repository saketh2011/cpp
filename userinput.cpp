#include <iostream>
#include <string>
using namespace std;

int main()
{
  //variable = name
 string name;
 //question
 cout << "Please tell me your name: "
 //To add spaces you do getline cin. if Not its cin >> name(or other variable);
 getline (cin,name);
 cout << "Welcome " << name
 cout << endl;
 return 0;
  
  
}
