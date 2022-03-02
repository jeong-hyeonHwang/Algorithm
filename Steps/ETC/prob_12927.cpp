//2022.03.02
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    cin >> s;

    int result = 0;
    for(int i=0; i < s.size(); i++)
    {
        if(s[i] == 'Y')
        {
            int startP = 0;
            if(i == 0)
                startP = 0;
            else
                startP = 1;
            for(int j = startP; j * (i+1) < s.size(); j++)
            {
                if(s[j-1] == 'Y')
                    s[j-1] = 'N';
                else
                    s[i-1] = 'Y';                    
            }
        }
        result += 1;
    }
    for(int i=0; i < s.size(); i++)
    {
        if(s[i] == 'Y')
        {
            cout << -1;
            return 0;
        }
    }
    cout << result;
}