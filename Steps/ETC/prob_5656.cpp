//2022.04.17
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::stoi;

bool Compare(string compare, int a, int b)
{
    bool result = false;
    if(compare == ">")
    {
        if(a > b)
            result = true;
        else
            result = false;

    }
    else if(compare == ">=")
    {
        if(a >= b)
            result = true;
        else
            result = false;
    }
    else if(compare == "<")
    {
        if(a < b)
            result = true;
        else
            result = false;
    }
    else if(compare == "<=")
    {
        if(a <= b)
            result = true;
        else
            result = false;
    }
    else if(compare == "==")
    {
        if(a == b)
            result = true;
        else
            result = false;
    }
    else if(compare == "!=")
    {
        if(a != b)
            result = true;
        else
            result = false;
    }
    return result;
}

int main()
{
    string s;
    while(true)
    {
        getline(cin, s);
        string temp = "";
        string c = "";
        int a = 0;
        int count = 0;
        for(int i=0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                if(count == 0)
                {
                    a = stoi(temp);
                    temp = "";
                }
                else if(count == 1)
                {
                    c = temp;
                    temp = "";
                }
            }
            else if(s[i] == s.size())
            {
                cout << "Case " << i+1 << ": ";
                cout << Compare(c, a, stoi(temp)) << '\n';
            }
            else
            {
                temp += s[i];
            }
        }
    }
}