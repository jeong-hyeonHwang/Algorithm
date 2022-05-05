//2022.05.06
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool vowelCheck(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
        return true;
    else
        return false;
}
int main()
{
    string s;
    while(true)
    {
        getline(cin, s);
        if(s == "#")
            break;

        int t = -1;
        for(int i= 0; i < s.size(); i++)
        {
            if(vowelCheck(s[i]) == true)
                break;
            else
                t = i;
        }

        for(int i = t + 1; i < s.size(); i++)
        {
            cout << s[i];
        }
        for(int i = 0; i < t + 1; i++)
        {
            cout << s[i];
        }
        cout << "ay\n";
    }
}
