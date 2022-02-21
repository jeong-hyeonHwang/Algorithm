//2022.02.21
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
    string s;
    map<string, int> sMap;
    int result = 0;

    for(int i=0; i< n; i++)
    {
        cin >> s;
        sMap.insert(make_pair(s, 1));
    }
    
    for(int i=0; i <m; i++)
    {
        cin >> s;
        if(sMap.find(s) != sMap.end())
            result += 1;
    }

    cout << result;
}