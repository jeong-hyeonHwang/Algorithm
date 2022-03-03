//2022.03.03
#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::string;
using std::map;
using std::make_pair;

int main()
{
    int n, m;
    cin >> n >> m;
    string* sArr = new string[n];
    for(int i=0; i < n; i++)
    {
        sArr[i] = "";
        cin >> sArr[i];
    }
    
    int resultDNum = 0;
    string answer = "";
    map<char, int> ma;
    for(int i = 0; i < m; i++)
    {
        char c = 'z';
        int t = 0;
        for(int j = 0; j < n; j++)
        {
            if(ma.find(sArr[j][i]) == ma.end())
            {
               ma.insert(make_pair(sArr[j][i], 1));
            }
            else
            {
                ma[sArr[j][i]] += 1;
            }
        }
        std::map<char, int>::iterator it;
        for(it = ma.begin(); it != ma.end(); it++)
        {
            if(t < it -> second)
            {
                t = it -> second;
                c = it -> first;
            }
            else if(t == it -> second)
            {
                if(it->first < c)
                {
                    t = it -> second;
                    c = it -> first;
                }
            }
        }
        
        resultDNum += (n - t);
        answer += c;
        ma.clear();
    }

    cout << answer << '\n' << resultDNum;
}
