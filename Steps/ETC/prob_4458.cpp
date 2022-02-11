//2022.02.11
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void ChangeToCapital(char c)
{
    if( c >= 97 && c <= 122) // a to z
    {
        cout << (char)(c - 32);
    }
    else
        cout << c;
}

int main()
{
    int n = 0;
    cin >> n;
    cin.ignore();
    string s;
    for(int i=0; i<n; i++)
    {
        getline(cin, s);
        ChangeToCapital(s[0]);
        for(int j = 1; j < s.size(); j++)
            cout << s[j];
        cout << '\n';
    }
}