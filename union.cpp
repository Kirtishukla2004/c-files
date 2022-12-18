#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int intersection(){
int arr1[6]={1,2,3,4,5};
   int  arr2[6]={5,3,4,9,10};
    char name[10]="duplicate";
    cout<<endl<<"intersection"<<endl;
   for (int i = 0; i < 5; i++)
   {
    for (int j = 0; j<5; j++)
    {
        if (arr1[i]==arr2[j])

        { 
           cout<<arr1[i];
        }
        
    }
}
}

int main()
{
   int arr1[6]={1,2,3,4,5};
   int  arr2[6]={5,7,8,9,10};
    char name[10]="duplicate";
   for (int i = 0; i < 5; i++)
   {
    for (int j = 0; j<5; j++)
    {
        if (arr1[i]==arr2[j])
        {
            arr1[i]= 0;
           
        }
        
    }
    }
    
    cout<<"union ="<<endl;
   
   for (int i = 0; i < 5; i++)
   {
    cout<<arr1[i];
   }
    for (int i = 0; i < 5; i++)
   {
    cout<<arr2[i];
   }
   intersection();
 return 0;
}