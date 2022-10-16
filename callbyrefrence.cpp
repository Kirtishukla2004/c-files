#include<iostream>
using  namespace std;
//global variable
int gst;
class  canteen{
   public:
   string name;
   int amount ;
   int quantity;
   int total;
     public:
     int products();
    
     int totalamount();
     int show();
     int payement();
     
     
};

int canteen ::products(){
    string name;
    string no;
    cout<<"type no when you wanna stop ";
   
   do
   {
   cout<<"what you want ";
    cin>>name;
    cout<<name;

     
   } while (name == no );
   
   
  
}


