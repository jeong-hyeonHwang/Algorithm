#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::pair;

int main()
{
    int n;
    cin>> n;

    string name;
    int score;

    pair<int, string>* p = new pair<int, string>[n];

    for(int i=0; i < n; i++)
    {
        cin >> name;
        cin >> score;
        p[i].first = score;
        p[i].second = name;
    }

    sort(p, p + n);

    int max = p[0].first;
    pair<string, int>* p2 = new pair<string, int>[n];
    
    for(int i=0; i <n; i++)
    {
        if(p[i].first == max)
        {
            p2.first = p[i].second;
            p2.second = p[i].first;            
        }
        else
            break;
    }

    sort(p2, p2 + n);

    cout << p2[0].first;
}