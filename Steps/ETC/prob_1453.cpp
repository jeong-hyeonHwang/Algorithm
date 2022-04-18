//2022.04.18
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::map;
using std::make_pair;

int main()
{
    int n;
    cin >> n;
    int place;
    int count = 0;
    map<int, int> m;
    for(int i=0; i< n; i++)
    {
        cin >> place;
        if(m.find(place) == m.end())
        {
            m.insert(make_pair(place, 1));
        }
        else
        {
            count += 1;
        }
    }
    cout << count;
}