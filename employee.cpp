#include<iostream>
using namespace std;
class employee{
   public:
       string name;
       int age;
       string address;
       public:
       void getdata();
       void showdata();
       };
 
  void employee ::  getdata(){
    cout<<"enter your name "<<endl;
    getline(cin,name);
    cout<<"enter your address "<<endl;
    getline(cin,address);
    cout<<"enter your age "<<endl;
    cin>>age;
  showdata();
   
   
   

 }
 void employee ::showdata(){
    cout<<" NAME : "<<name<<endl;
    cout<<" AGE : "<<age<<endl;
    cout<<" ADDRESS : "<<address<<endl;

 }


int main(){
    employee obj;
    obj.getdata();
    return 0;
    
}