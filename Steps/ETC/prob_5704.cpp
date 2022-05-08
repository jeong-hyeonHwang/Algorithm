//2022.05.08
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
        int alphabetArr[26] = {0};

        if(s == "*")
            break;
        for(int i=0; i < s.size(); i++)
        {
            if(s[i] != ' ')
            {
                int temp = s[i] - 'a';
                alphabetArr[temp] += 1; 
            }
        }

        int count = 0;
        for(int i=0; i < 26; i++)
        {
            if(alphabetArr[i] != 0)
                count += 1;
        }

        if(count == 26)
            cout << "Y\n";
        else
            cout << "N\n";
    }
}