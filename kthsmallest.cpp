#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
void method1(int arr[],int n ,int k ){
 int temp;
  //sorting of array 
  for (int i = 0; i <=n ; i++)
  {
   for (int j = i+1; j <=n; j++)
   {
    if (arr[i]>arr[j])
    {
       temp =arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
    }
    
   }
   
  }
  for (int i = 0; i <=n; i++)
  {
    cout<<endl<<"sorted =="<<arr[i];
  }

int k ;
cin>>k;
cout<<arr[k];
}
int kthSmallest(int arr[], int N, int K){
// Sort the given array
    sort(arr, arr + N);
    return arr[K - 1];
    // Return k'th element in the sorted array
   
}
int main(){
int n ,temp;
 cout<<"enter array size "<<endl;
 cin>>n;
 int arr[n];
 cout<<"enter array elements "<<endl;
 for (int i = 0; i <=n; i++)
 {
    cout<<i<<"="<<endl;
   cin>>arr[i];

 }
 
 int arr[] = { 12, 3, 5, 7, 19 };
    int N = sizeof(arr) / sizeof(arr[0]), K = 2;
 
    // Function call
    cout << "K'th smallest element is "
         << kthSmallest(arr, N, K);

  

    return 0;

 
}