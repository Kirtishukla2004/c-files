#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
int N =1e6 +2 ;

bool check[N];

int arr[n];
for (int i = 0; i <n; i++)
{
    cin>>arr[i];

}
for (int i = 0; i <N; i++)
{
    check[i]=0;
}
for (int i = 0; i < n; i++)
{
    if(arr[i] >= 0){
        check[arr[i]] =1;
    }
}
int ans =-1;
   for (int i = 1; i < N; i++)
   {
      if(check[i] == false )
      {
       ans =i;
       break;
      }

   }
   cout<<ans;
   


}