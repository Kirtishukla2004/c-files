#include <iostream>
using namespace std;
int main()
{
    int savings;
    cout << "enter todays savings = ";
    cin >> savings;
    if (savings > 10000)
    {
        if (savings > 50000)

        {
            cout << "go in a 5 star hotel";
        }
        else
        {
            cout << "eat pizza";
        }
    }

    else if (savings<10000 & savings> 5000)
    {
        cout << "eat burger";
    }
    else
    {
        cout << "stay at home";
    }
    return 0;
}