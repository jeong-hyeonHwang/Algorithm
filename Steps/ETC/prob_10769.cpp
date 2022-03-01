//2022.03.01
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    getline(cin, s);
    int happy = 0;
    int sad = 0;
    for(int i=0; i < s.size(); i++)
    {
        if(s[i] == ':' && s[i+1] == '-')
        {
            if(s[i+2] == ')')
            {
                happy += 1;
            }
            else
            {
                sad += 1;
            }
        }
    }
    if(happy == 0 && sad == 0)
    {
        cout << "none";
    }
    else if (happy == sad)
    {
        cout << "unsure";
    }
    else
    {
        string feel = happy > sad ? "happy" : "sad";
        cout << feel;
    }
}