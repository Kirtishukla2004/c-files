#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "enter three numbers=" << endl
         << "no.1" << endl;
    cin >> n1;
    cout << "no.2" << endl;
    cin >> n2;
    cout << "no.3" << endl;
    cin >> n3;
    int sum = n1 + n2 + n3;
    cout << "sum of three numbers=" << sum << endl;
    if (sum < 200 && sum >= 100)
    {
        cout << sum << " comes in the range of 100 to 200";
    }
    else if (sum == 100 || sum == 200)
    {
        cout << "equal to given range";
    }
    else
    {
        cout << "does'nt comes in range of 100 or 200";
    }
    return 0;
}
