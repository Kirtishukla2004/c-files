#include <iostream>
using namespace std;
int yeartomonth()
{
    float year;
    cout << "enter year =";
    cin >> year;
    float months = year * 12;
    cout << "converted =" << months << endl;
}
int monthtoweek()
{
    float months;
    cout << "enter months =";
    cin >> months;
    float week = months * 4.34524;
    cout << "converted =" << week << endl;
}
int weektodays()
{
    float week;
    cout << "enter week =";
    cin >> week;
    float days = week * 7;
    cout << "converted =" << days << endl;
}
int daystohours()
{
    float days;
    cout << "enter year =";
    cin >> days;
    float hours = days * 24;
    cout << "converted =" << hours << endl;
}
int hourstominutes()
{
    float hours;
    cout << "enter year =";
    cin >> hours;
    float minutes = hours * 60;
    cout << "converted =" << minutes << endl;
}
int minutestosecods()
{
    float minutes;
    cout << "enter minutes =";
    cin >> minutes;
    float seconds = minutes * 60;
    cout << "converted =" << seconds << endl;
}
int sectonano()
{
    float seconds;
    cout << "enter seconds =";
    cin >> seconds;
    float nano = seconds * 100000000;
    cout << "converted =" << nano << endl;
}
int all()
{
    float year;
    cout << "enter year  ";
    cin >> year;
    float months = year * 12;
    float week = months * 4.34524;
    float days = week * 7;
    float hours = days * 24;
    float minutes = hours * 60;
    float seconds = minutes * 60;
    float nano = seconds * 100000000;
    cout << "coverted " << endl
         << "months  " << months << endl
         << "weeks  " << week << endl
         << "days  " << days << endl
         << "hours " << hours << endl
         << "minutes " << minutes << endl
         << "seconds " << seconds << endl
         << "nanoseconds  " << nano << endl;
}
int main()
{
    char y, m, w, d, h, i, s, n, choice, a;
    cout << "enter your choice (here i is for minutes)" << endl
         << "enter y for year to months" << endl
         << "enter m for months into weeks " << endl
         << "enter w for week into days "
         << "enter d for days into hours " << endl
         << "enter h for hours into minutes" << endl
         << "enter i for minutes to seconds " << endl
         << "enter s forseconds to nanoseconds" << endl
         << "enter a for all " << endl
         << "enter t for all together by year " << endl;
    ;

    do
    {

        cin >> choice;

        switch (choice)
        {
        case 'y':
            yeartomonth();
            break;
        case 'm':
            monthtoweek();
            break;
        case 'w':
            weektodays();
            break;
        case 'd':
            daystohours();
            break;
        case 'h':
            hourstominutes();
            break;
        case 'i':
            minutestosecods();
            break;
        case 's':
            sectonano();
            break;
        case 'a':
            yeartomonth();
            monthtoweek();
            weektodays();
            daystohours();
            hourstominutes();
            minutestosecods();
            sectonano();
            break;
        case 't':
            all();
            break;
        default:
            cout << "wrong inputs ";
            break;
        }
    } while (choice != a);

    return 0;
}