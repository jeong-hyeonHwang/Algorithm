//2022.03.03
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::map;
using std::make_pair;

int main()
{
    map<int, int> map;
    int n;
    for(int i=0; i < 10; i++)
    {
        cin >> n;
        if(map.find(n) == map.end())
        {
            map.insert(make_pair(n, 1));
        }
        else
        {
            map[n] += 1;
        }
    }

    int sum = 0;
    int most = 0;
    int num = 0;
    std::map<int, int>::iterator it;
    for(it=map.begin(); it != map.end(); it++)
    {
        sum += (it -> first * it -> second);
        if(num < it->second)
        {
            num = it->second;
            most = it->first;
        }
    }

    cout << sum/10 << '\n' << most;
}