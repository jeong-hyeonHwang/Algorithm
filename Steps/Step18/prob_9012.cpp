//2022.02.04
// Not Stack VER
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

string VPSCheck(string s)
{
    int lCount = 0;
    int rCount = 0;
    
    for(int j=0; j<s.size(); j++)
    {
        if(s[j] == '(')
        {
            lCount += 1;
        }
        else if(s[j] == ')')
        {
            rCount += 1;
        }
        //cout << count << ' ';
        if(lCount < rCount)
        {
            return "NO";
        }

    }

    if(lCount == rCount)
        return "YES";
    else
        return "NO";
}
int main()
{
    int t;
    cin >> t;
    string str;

    for(int i=0; i< t; i++)
    {
        cin >> str;
        cout << VPSCheck(str) << '\n';
    }
}