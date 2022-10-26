#include <iostream>
using namespace std;
class form // making class 
{
public:
   string name;

public:
   void getname();
   void change(string *change);// pointer 
};

void form ::getname()
{
   cout << "enter you name ";
   cin >> name;
   cout << "if typed wrong name please enter 'X' if not press any key ";
   char value;
   cin >> value;
   if (value == 'X')
   {

      change(&name);//calling by refrence
   }
   else
   {
      cout << "name entered as" << name;
   }
}
void form ::change(string *change)
{
   cout <<endl<< "Before name was " << name;

   cout <<endl<< "enter your changes ";
   cin >> *change;
   cin.ignore();
   name = *change;
    cout << "changes made **  " << name;
}
int main()
{
   form can;
   can.getname();
   cin.ignore();

   return 0;
}