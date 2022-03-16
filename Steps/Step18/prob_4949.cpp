//2022.03.16
#include <iostream>
#include <string>
#include <cstring>
#include <stack>

using std::cin;
using std::cout;
using std::string;
using std::stack;

string check(string str)
{
    string result = "";
    stack<char> s;
    char currentExpect = 't';
    for(int i=0; i < str.size(); i++)
    {
        if(s.empty() == true)
        {
            if(str[i] == ')' || str[i] == ']')
            {
                return "no";
            }
            else if(str[i] == '(')
            {
                currentExpect = ')';
                s.push(str[i]);
            }
            else if(str[i] == '[')
            {
                currentExpect = ']';
                s.push(str[i]);
            }
        }
        else
        {
            if(str[i] == '(')
            {
                currentExpect = ')';
                s.push(str[i]);
            }
            else if(str[i] == '[')
            {
                currentExpect = ']';
                s.push(str[i]);
            }
            else if(str[i] == ')' || str[i] == ']')
            {
                if(currentExpect == str[i])
                {
                    s.pop();
                    if(s.empty() == false)
                    {
                        if(s.top() == '(')
                        {
                            currentExpect = ')';
                        }
                        else if(s.top() == '[')
                        {
                            currentExpect = ']';
                        }
                    }
                }
                else
                {
                    return "no";
                }
            }
        }
    }
    if(s.empty() == true)
        return "yes";
    else
        return "no";
}
int main()
{
    string s = "";
    
    while(true)
    {
        getline(cin, s);
        if(s == ".")
            return 0;
        else
        {
            cout << check(s) << '\n';
        }
    }
}