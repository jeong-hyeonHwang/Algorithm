//2022.02.20
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] < 'D')
            cout << (char)(s[i] + 23);
        else
            cout << (char)(s[i] - 3);
    }
}