#include <iostream>
using namespace std;
int main()
{
    int a; // declartation
    a = 12;
    float b = 4;
    char c = 'a';
    bool d = 4 > 8; // prints 1 when true prints 0 when false

    // initialization
    cout << "size of int " << sizeof(a) << endl;
    cout << "a = " << a << endl;
    cout << "size of float " << sizeof(b) << endl;
    cout << "b = " << b << endl;
    cout << "size of char " << sizeof(c) << endl;
    cout << "c = " << c << endl;
    cout << "size of bool " << sizeof(d) << endl;
    cout << "d = " << d << endl;
    short int si = 43;
    long int li = 33;
    cout << "size of short int  " << sizeof(si) << endl;
    cout << "si = " << si << endl;
    cout << "size of long int " << sizeof(li) << endl;
    cout << "li = " << li << endl;

    return 0;
}