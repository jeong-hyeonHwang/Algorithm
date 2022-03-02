//2022.03.02
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
    string s;
    cin >> s;
    map<char, int> m;
    char middle = '0';
    for(int i= 0; i < s.size(); i++)
    {
        if(m.find(s[i]) != m.end())
        {
            m[s[i]] += 1;
        }
        else
        {
            m.insert(make_pair(s[i], 1));
        }
    }
    std::map<char, int>::iterator it;
    string result = "";
    if(s.size() % 2 == 0) // ABABAB
    {
        for(it = m.begin(); it != m.end(); it++)
        {
            if((it -> second)%2 !=  0)
            {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            else
            {
                for(int i =0; i < it -> second/2; i++)
                {
                    result += it->first;
                }
            }
            
        }
    }
    else // ABABA
    {
        bool middleCheck = false;
        for(it = m.begin(); it != m.end(); it++)
        {
            if(middleCheck == false && (it -> second)%2 ==  1)
            {
                for(int i =0; i < it -> second/2; i++)
                {
                    result += it->first;
                }
                middle = it -> first;
                middleCheck = true;
            }
            else if(middleCheck == true && (it -> second)%2 ==  1)
            {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            else if((it -> second)% 2 == 0)
            {
                for(int i =0; i < it -> second/2; i++)
                {
                    result += it->first;
                }
            }
        }
    }

    cout << result;
    if(s.size() % 2 == 1)
    {
        cout << middle;
    }
    // 6 >> 3 -> 2;
    // 5 >> 2 -> 1
    for(int i=s.size()/2 - 1; i >= 0; i--)
    {
        cout << result[i];
    }
}