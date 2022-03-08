//2022.03.08
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    cin >> n;
    string s;
    for(int i=0; i < n; i++)
    {
        cin >> s;
        cout << s[0] << s[s.size()-1] << '\n';
    }
}