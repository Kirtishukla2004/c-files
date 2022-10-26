#include<iostream>
using namespace std;
class  ego{
    int a;
    
public:
 void check(int k){
    
    
    if(k%2==0){
        cout<<"even number "<<k<<endl;

    }
    else{
        cout<<"odd number "<<k<<endl;
    }
 }
 
 void check(int a ,int b){
             if (a>b)
             {
                cout<<a <<"is greater "<<endl;
             }
             else if (a<b)
             {
               cout<<b<<"is greater ";
             }
            else{
                cout<<"equal";
            }
             
 }

};
int main(){
    ego obj;
    obj.check(40 ,30);
    obj.check(30);
    return 0;
}
