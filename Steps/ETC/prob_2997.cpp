//2022.03.04
#include <iostream>
#include <algorithm>
#include <map>

using std::cin;
using std::cout;
using std::sort;
using std::map;
using std::make_pair;

int main()
{
    int n[3];
    int d = 0;
    map<int, int> map;

    for(int i=0; i < 3; i++)
    {
        n[i] = 0;
        cin >> n[i];
    }
    sort(n, n+3);
    
    for(int i=0; i < 2; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            int temp = n[j] - n[i];
            if(map.find(temp) == map.end())
            {
                map.insert(make_pair(temp, 1));
            }
            else
            {
                map[temp] += 1;
            }
        }
    }

    std::map<int, int>::iterator it;
    
    int max = 0;
    for(it = map.begin(); it != map.end(); it++)
    {
        if(it -> second > max)
        {
            max = it -> second;
            d = it -> first;
        }
    }
    for(int i=0; i < 2; i++)
    {
        if(n[i] + d != n[i+1])
        {
            cout << n[i] + d;
            return 0;
        }
    }
    cout << n[2] + d;
}