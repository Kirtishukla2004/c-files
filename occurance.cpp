#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n =5;
int k =0;

int arr[n]={5,3,3,2,1};


  sort(arr,arr + n);
 
for (int i = 0; i < n; i++)
{
 cout<<arr[i];
   int x=3;
   
   if (arr[x]==arr[i])
   {
      
      k++;
   }
   
}
cout<<endl<<k;
 return 0;
}