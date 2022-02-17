//2022.02.17
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
        if(s[i] <= 90) // Capital
            cout << (char)(s[i] + 32);
        else // Small
            cout << (char)(s[i] - 32);
    }
}