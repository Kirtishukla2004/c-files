#include <iostream>
using namespace std;
int main()
{
    // initialise totals

    int votesForA = 0, votesForB = 0, spoiltVotes = 0;

    char vote = 0;

    do
    {
        cout << "Which candidate do you want to vote(votes should to be entered in capital letters): ";
        cin >> vote;

        switch (vote)
        {
        case 'A':
            ++votesForA;
            break;
        case 'B':
            ++votesForB;
            break;
        case 'X':
            break;
        default:
            ++spoiltVotes;
            break;
        }

    } while (vote != 'X');

    // display results
    cout << "Total candidate A: " << votesForA << endl;
    cout << "Total candidate B: " << votesForB << endl;

    cout << "Total spoilt votes: " << spoiltVotes << endl;

    return 0;
}