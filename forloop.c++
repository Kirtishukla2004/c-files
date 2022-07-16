#include <iostream>
using namespace std;

int main()
{
    int i, a, b;
    cout << "2 is a prime number but it will not show in the output as its a only prime and even number" << endl;
    cout << "enter the starting = ";
    cin >> a;
    cout << "enter the ending =  ";
    cin >> b;

    for (i = a; i <= b; i = i + 2)
    {
        if (i / 2 == 0 || i / 4 == 0 || i % 2 != 0)
        {
            cout << "prime number == " << i << endl;
        }
        else
        {
            cout << " wrong inputs!";
        }
    }

    return 0;
}
