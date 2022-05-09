//2022.05.09
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::map;
using std::make_pair;
int main()
{
    map<int, int> m;
    int n;
    cin >> n;
    
    int num;
    for(int i=0; i < n; i++)
    {
        cin >> num;
        if(m.find(num) == m.end())
        {
            m.insert(make_pair(num,1));
        }
        else
        {
            m[num] += 1;
        }
    }

    int result = 101;
    int minimum = 2001;
    std::map<int,int>::iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
        if(it -> second <= minimum)
        {
            if(it -> second == minimum)
            {
                if(result > it -> first)
                {
                    result = it -> first;
                }
            }
            else
            {
                result = it -> first;
            }
            minimum = it -> second;
        }
    }
    cout << result;
}

