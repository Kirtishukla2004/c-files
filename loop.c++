#include <iostream>
using namespace std;
int main()
{
    int a, b, d, c;
    cout << "enter the length of the table *do set the end of the table +1 in that number= ";
    cin >> a;
    cout << "which table you wanna print= ";
    cin >> b;

    cout << "table of  " << b << endl;

    for (int i = 0; i <= a; i = i + b)
    {
        cout << "  " << i << endl;
    }
    return 0;
}