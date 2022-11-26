#include<iostream> 
using namespace std;
int arraySortedCheck(int arr[], int n){
   //all elements are checked and
   //all are in sorted order
   if (n == 1 || n == 0)
      return 1;
   //when an array is not in sorted order
   if(arr[n-1] < arr[n-2])
      return 0;
   return arraySortedCheck(arr, n-1);
}
int main(int argc, char const *argv[]){
   int arr[] = {1,2,3,4,7};
   int n = sizeof(arr)/sizeof(arr[0]);
   if(arraySortedCheck(arr, n)){
      cout<<"Array is in sorted order";
   }
   else
      cout<<"Array is not in sorted order";
   return 0;
}