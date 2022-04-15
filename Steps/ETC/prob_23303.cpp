//2022.04.15
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    getline(cin, s);
    for(int i= 0; i < s.size()-1; i++)
    {
        if(s[i] == 'D' || s[i] == 'd')
        {
            if(s[i+1] == '2')
            {
                cout << "D2";
                return 0;
            }
        }
    }
    cout << "unrated";
}