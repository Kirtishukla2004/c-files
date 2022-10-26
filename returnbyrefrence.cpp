#include <iostream>
using namespace std;
  
// Function to return as return by reference
int& returnValue(int& x)
{
  
    
    cout << "x = " << x
         << " The address of x is "
         << &x << endl;
  
    // Return reference
    return x;
}
  
int main()
{
    int a = 20;
    int& b = returnValue(a);
  
    // Print a and its address
    cout << "a = " << a
         << " The address of a is "
         << &a << endl;
  
    // Print b and its address
    cout << "b = " << b
         << " The address of b is "
         << &b << endl;
  
    
    returnValue(a) = 13;
  
    // The above expression assigns the
    // value to the returned alias as 3.
    cout << "a = " << a
         << " The address of a is "
         << &a << endl;
    return 0;
}