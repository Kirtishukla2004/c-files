#include <iostream>
using namespace std;
int main()
{
    int m, a, h, i = 1, b = 1, j;

    cout << "enter the month of the year 2010";
    cin >> m;
    // progamm to find a day of any month in 2010
    switch (m)
    {
    case 1:
        a = 6;
        j = 31;
        break;
    case 2:
        a = 2;
        j = 28;
        break;
    case 3:
        a = 2;
        j = 31;
        break;
    case 4:
        a = 6;
        j = 31;
        break;
    case 5:
        a = 6;
        j = 31;
        break;
    case 6:
        a = 6;
        j = 31;
        break;
    case 7:
        a = 6;
        j = 31;
        break;
    case 8:
        a = 6;
        j = 31;
        break;
    case 9:
        a = 6;
        j = 31;
        break;
    case 10:
        a = 6;
        j = 31;
        break;
    case 11:
        a = 6;
        j = 31;
    case 12:
        a = 6;
        j = 31;
        break;

    default:
        cout << "wrong";
        break;
    }

    cout << endl
         << endl
         << endl;
    cout << "sun  mon  tue  wed  thus  fri  sat  sun ";
    switch (a)
    {
    case 1:
        cout << " ";
        break;
    case 2:
        cout << " "
             << " ";
    case 3:
        cout << " "
             << " "
             << " ";
    case 4:
        cout << " "
             << " "
             << " "
             << " ";
    case 5:
        cout << " "
             << " "
             << " "
             << " "
             << " ";
    case 6:
        cout << " "
             << " "
             << " "
             << " "
             << " "
             << " ";
    case 7:
        cout << " "
             << " "
             << " "
             << " "
             << " "
             << " "
             << " ";

    default:
        break;
    }
    h = 8 - 1;
    for (i = 2; i <= h; i++)
    {
        cout << " " << i;
        cout << endl;
    }
    for (i = h + 1; i <= j; i++)
    {
        if (b == 8)
        {
            cout << endl;
            b = 1;
        }
        cout << " " << i;
        b++;
    }
    return 0;
}