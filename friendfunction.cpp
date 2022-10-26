#include <iostream>
using namespace std;
class calculator
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "enter first and second digit " << endl;
        cin >> a >> b;
    }
    friend void add(calculator ob);
    friend void sub(calculator ob);
    friend void mul(calculator ob);
    friend void div(calculator ob);
    friend void module(calculator ob);
};
void add(calculator ob)
{
    ob.c = ob.a + ob.b; // usng private data of class
    cout << "sum = " << ob.c << endl;
}
void sub(calculator ob)
{
    ob.c = ob.a - ob.b; // usng private data of class
    cout << "subtracted  = " << ob.c << endl;
}
void mul(calculator ob)
{
    ob.c = ob.a * ob.b; // usng private data of class
    cout << "multiplied   = " << ob.c << endl;
}
void div(calculator ob)
{
    float c;
    c = ob.a / ob.b; // usng private data of class
    cout << "divided   = " << c << endl;
}
void module(calculator ob)
{
    float c;
    c = ob.a % ob.b; // usng private data of class
    cout << "moduled  = " << c << endl;
}
int main()
{
    int ch;
    calculator use;
    cout << "enter 1 for add" << endl
         << "2 for subtraction " << endl
         << "3 for multiplying " << endl
         << "4 for division " << endl
         << "5 to find module " << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        use.input();
        add(use);
        break;
    case 2:
        use.input();
        sub(use);
        break;
    case 3:
        use.input();
        mul(use);
        break;
    case 4:
        use.input();
        div(use);
        break;
    case 5:
        use.input();
        module(use);
        break;

    default:
        cout << "wrong inputs";
        break;
    }
}