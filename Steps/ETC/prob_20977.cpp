//2022.03.16
#include <iostream>

using std::cin;
using std::cout;
using std::pair;

int main()
{
    int n;
    pair<char, int> countJOI[3];
    char joi;

    countJOI[0].first = 'J';
    countJOI[1].first = 'O';
    countJOI[2].first = 'I';

    for(int i = 0; i < 3; i++)
    {
        countJOI[i].second = 0;
    }

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> joi;
        if(joi == 'J')
            countJOI[0].second += 1;
        else if(joi == 'O')
            countJOI[1].second += 1;
        else if(joi == 'I')
            countJOI[2].second += 1;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int k = 0; k < countJOI[i].second; k++)
            cout << countJOI[i].first;
    }
}