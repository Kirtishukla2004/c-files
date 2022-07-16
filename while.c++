#include <iostream>

using namespace std;

int main()
{
    int i, b;
    cin >> i;
    cout << "enter till then counting = ";
    cin >> b;

    while (i <= b)
    {
        cout << i << " ";
        ++i;
    }

    return 0;
}
