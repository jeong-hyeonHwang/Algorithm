//2022.04.13
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool VowelCheck(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    return false;
}

bool PSWDCheck(string s)
{
    bool vowelUseCheck = false;
    int sameACount = 0;
    char before = '0';
    bool beforeVC = VowelCheck(s[0]) == true? false : true;
    int vcCount = 1;

    for(int i=0; i < s.size(); i++)
    {
        if(vowelUseCheck == false)
        {
            vowelUseCheck = VowelCheck(s[i]);
        }
        
        if(before == s[i])
        {
            if(!(before == 'e' || before == 'o'))
                return false;
        }
        else
        {
            before = s[i];
        }
        
        if(VowelCheck(s[i]) == true)
        {
            if(beforeVC == true)
            {
                vcCount += 1;
                if(vcCount == 3)
                    return false;
            }
            else
            {
                vcCount = 1;
            }
            beforeVC = VowelCheck(s[i]);
        }
        else
        {
            if(beforeVC == false)
            {
                vcCount += 1;
                if(vcCount == 3)
                    return false;
            }
            else
            {
                vcCount = 1;
            }
            beforeVC = VowelCheck(s[i]);
        }
    }
    if(vowelUseCheck == true)
        return true;
    else
        return false;
}

int main()
{
    string s = "";
    while(true)
    {
        getline(cin, s);

        if(s == "end")
            break;
        
        if(PSWDCheck(s) == true)
            cout << '<' << s << "> is acceptable.\n";
        else
            cout << '<' << s << "> is not acceptable.\n";
    }
}