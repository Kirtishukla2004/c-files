#include <iostream>
using namespace std;
int main()
{
    int sum;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 10; j > 1; j--)
        {
            sum = i + j;
            if (sum == 11)
            {
                cout << i << "+" << j << "=" << sum << endl;
            }
        }
    }
    return 0;
}