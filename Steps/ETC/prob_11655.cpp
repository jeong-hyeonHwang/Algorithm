//2022.02.08
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    getline(cin, str);
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] != ' ')
        {
            if(str[i]  >= 97) // small alphabet
            {
                if(str[i] >= 110)
                {
                    cout << (char)(str[i] - 13);
                }
                else
                {
                    cout << (char)(str[i] + 13);
                }
            }
            else if(str[i] >= 65 )
            {
                if(str[i] >= 78)
                {
                    cout << (char)(str[i] - 13);
                }
                else
                {
                    cout << (char)(str[i] + 13);
                }
            }
            else
                cout << str[i];
        }
        else
            cout << str[i];
    }
}