//2022.02.11
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int count = 0;

void vowelTest(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        count += 1;
}

int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        vowelTest(s[i]);
    }
    cout << count;
}