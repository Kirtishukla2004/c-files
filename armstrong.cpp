#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int orignaln = n;
    int multiply;

    while (n > 0)
    {
        int lastdigit = n % 10;
        multiply = lastdigit * lastdigit * lastdigit;
        sum =sum+ multiply;
        n = n / 10;
    }

    if (sum == orignaln)
    {
        cout << "armstrong number";
    }

    else
    {
        cout << "not an armstrong number ";
    }

    return 0;
}
