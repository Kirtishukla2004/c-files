#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the lenght of array =";
    cin>>n;
    int arr[n];
    int  i;
    for (i = 0; i <= n; i++)
    {
       cout<<endl<<"enter array elements :";
      
       cin>>arr[i];
        
    }
    for (int j= 0; j <= n; j++)
    {
        cout<<endl<<"here's your array =" <<arr[j];
    }
    int number;
    cout<<endl<<"enter the number to be searched =";
    cin>>number;
   
      for (int k = 0; k <=n; k++)
      {
       if(arr[k]== number ){
        cout<<k;
       } 
      }

        

      return 0;
   
    
}