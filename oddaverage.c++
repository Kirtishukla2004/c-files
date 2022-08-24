#include <iostream>
using namespace std;
int main()
{
    int start, end, count = 0;
    int sum = 0, average;
    cout << "enter the starting and ending number " << endl;
    cin >> start >> end;

    for (int j = start; j <= end; j++)
    {
        if (j % 2 != 0)
        {
            cout << "odd number " << j << endl;
            sum = sum + j;
            count++;
        }
        else
        {
            continue;
        }
    }
    cout << "sum of odd numbers =" << sum << endl;
    cout << "total odd numbers from " << start << " to " << end << " is = " << count << endl;
    average = sum / count;
    cout << "average of odd  numbers " << average;
    return 0;
}