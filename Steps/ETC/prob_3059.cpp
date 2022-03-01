//2022.03.01
//초기화 잊지말자
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
        bool* alphabetUse = new bool[26];
        cin >> s;
        for(int j = 0; j < 26; j++)
        {
            alphabetUse[j] = false;
        }
        
        for(int j=0; j < s.size(); j++)
        {
            int index = s[j] - 'A';
            alphabetUse[index] = true;
        }
        
        int result = 0;
        for(int j =0; j < 26; j++)
        {

            if(alphabetUse[j] != true)
            {
                result += (j + 'A');
            }
        }
        cout << result <<'\n';
    }    
}