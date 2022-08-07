#include <iostream>
using namespace std;

int anothermethod(int age, int weight)
{
    cout << "enter your age:";
    cin >> age;
    cout << "enter your weight:";
    cin >> weight;
    if (age > 18 && age < 55 && weight > 45)
    {
        cout << "eligible";
    }
    else
    {
        cout << "not eligible";
    }
}
int main()
{
    int age, weight;
    cout << "enter your age:";
    cin >> age;
    cout << "enter your weight:";
    cin >> weight;
    if (age > 18 && age < 55)
    {
        if (weight > 45)
        {
            cout << "eligible" << endl;
        }
    }
    else
    {
        cout << "not eligible" << endl;
    }

    anothermethod(age, weight);
    return 0;
}
