//2022.05.18
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

string s;

int result(int start, int end)
{
    int num = 1;
    for(int i = start; i < end; i++)
    {
        num *= (s[i] - '0');
    }
    return num;
}
int main()
{
    cin >> s;
    if(s.size() == 1)
    {
        cout << "NO";
        return 0;
    }
    for(int i=0; i < s.size(); i++)
    {
        if(result(0, i + 1) == result(i + 1, s.size()))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}