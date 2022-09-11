#include<iostream>
#include<climits>
using namespace std;
 
 int main(){
     int n;
     cin>>n;
     int array[n];
     for (int i = 0; i <n; i++)
     {
         cin>>array[i];
     }
     int maxno=INT_MIN;
     int minno=INT_MAX;
     for (int i = 0; i < n; i++)
     {
         maxno=max(maxno,array[i]);
         minno=min(minno,array[i]);
    
     }
     cout<<maxno<<" "<<minno;
    return 0;
 }
  int main
  (){
      
      int n;
      cin>>n;
      int   array[n];
      for (int i = 0; i <n; i++)
      {  
          cin>>array[i];
          
      }  
      int   maxno=0;
      int minno=INT_MAX;
      
      for (int i = 0; i < n; i++)
      {  
          if (maxno<array[i])
          {    maxno=array[i];
                 minno=maxno;
          }  
          
          if   (minno > array[i])
          {  
              minno=array[i];
            
          }  
  
          
        
      }
       cout<<maxno<<" "<<minno;
     
      return 0;
    
  }