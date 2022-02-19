//2022.02.19
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int aNum, bNum;
    cin >> aNum >> bNum;

    map<int, int> m;
    int n = 0;
    for(int i=0; i < aNum; i++)
    {
        cin >> n;
        m.insert(make_pair(n, 1));
    }
    for(int i=0; i < bNum; i++)
    {
        cin >> n;
        if(m.find(n) == m.end())
            m.insert(make_pair(n, 1));
        else
            m[n] += 1;
    }
    map<int, int>::iterator it = m.begin();
    int result = 0;
    while(it != m.end())
    {
        if(it->second == 1)
            result += 1;
        it++;
    }
    cout << result;
}