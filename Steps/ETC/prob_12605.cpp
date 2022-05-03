//2022.05.03
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

void ReverseLine(string s)
{
    vector<string> v;
    string temp = "";
    for(int t =0; t <= s.size(); t++)
    {
        if(s[t] == ' ' || t == s.size())
        {
            v.push_back(temp);
            temp = "";
        }
        else
        {
            temp += s[t];
        }
    }

    for(int t = v.size() - 1; t >= 0; t--)
    {
        cout << v[t] << ' ';
    }
    cout << '\n';
}

int main()
{
    int n;
    cin>> n;
    cin.ignore();
    
    string s;
    for(int i=0; i < n; i++)
    {
        getline(cin, s);
        cout << "Case #" << i+1 << ": ";
        ReverseLine(s);
    }
}