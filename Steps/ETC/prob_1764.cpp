//2022.02.07
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::set;
using std::vector;
using std::iterator;

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int n = 0;
    int m = 0;
    cin >> n >> m;
    set<string> noH;
    vector<string> noHnS;
    string name;
    int count = 0;
    for(int i=0; i<n+m; i++)
    {   
        cin >> name;
        auto in = noH.insert(name);
        if(!in.second)
        {
            count++;
            noHnS.push_back(name);
        }
        
    }
    sort(noHnS.begin(), noHnS.end());
    cout << count << '\n';
    for(vector<string>::iterator it = noHnS.begin(); it != noHnS.end(); it++)
    {
        cout << *it << '\n';
    }
}