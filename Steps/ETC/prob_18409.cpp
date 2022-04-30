//2022.05.01
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool vowelCheck(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    string s = "";
    cin >> s;
    
    int vowelCount = 0;
    for(int i=0; i< n; i++)
    {
        if(vowelCheck(s[i]) == true)
        {
            vowelCount += 1;
        }
    }
    cout << vowelCount;
}