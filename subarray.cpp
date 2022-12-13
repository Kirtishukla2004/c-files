#include<iostream>
using namespace std;
int main(){
int n;
int cur =0;
cin>>n;
int arr[n];
for (int i = 0; i <= n; i++)
{
    cin>>arr[i];

}
for (int i = 0; i < n; i++)
{
cur=0;

     for (int j = i; j < n; j++)
     {
       cur += arr[j];
       cout<<cur<<endl;
     }
     
  
}

return 0;

}