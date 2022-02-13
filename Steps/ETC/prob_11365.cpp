//2022.02.13
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    while(true)
    {
        getline(cin, s);
        if(s == "END")
            break;
        else
        {
            for(int i=s.size()-1; i>=0; i--)
            {
                cout << s[i];
            }
            cout << '\n';
        }
    }
}