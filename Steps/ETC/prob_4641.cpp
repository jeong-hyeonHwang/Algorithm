//2022.04.25
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::stoi;
using std::vector;
using std::sort;

int Find(vector<int> temp)
{
    int count = 0;
    for(int i=0; i < temp.size() - 1; i++)
    {
        for(int j = i+1; j < temp.size(); j++)
        {
            if(temp[i] * 2 == temp[j])
                count += 1;
        }
    }
    return count;
}

int main()
{
    string s;
    string temp = "";
    while(true)
    {
        vector<int> v;
        getline(cin, s);
        if(s == "-1")
            break;

        for(int i =0; i <= s.size(); i++)
        {
            if(s[i] == ' ' || i == s.size())
            {
                v.push_back(stoi(temp));
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }
        
        sort(v.begin(), v.end());
        cout << Find(v) << '\n';
    }
}