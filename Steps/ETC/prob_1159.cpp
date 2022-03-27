//2022.03.27
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
    int n;
    cin >> n;
    string fName;
    map<char, int> m;
    for(int i=0; i < n; i++)
    {
        cin >> fName;
        if(m.find(fName[0]) != m.end())
            m[fName[0]] += 1;
        else
            m.insert(make_pair(fName[0], 1));
    }
    std::map<char, int>::iterator it;
    string result = "";
    for(it = m.begin(); it != m.end(); it++)
    {
        if(it -> second >= 5)
        {
            result += it -> first;            
        }
    }
    if(result == "")
    {
        cout << "PREDAJA";
    }
    else
        cout << result;
}