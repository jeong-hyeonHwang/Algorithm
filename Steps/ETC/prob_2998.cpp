//2022.02.22
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.size()%3 != 0)
    {
        
        int limit = 3 - s.size()%3;
        for(int i=0; i< limit; i++)
        {
            s.insert(0, "0");
        }
    }
    for(int i=0; i <s.size()-1; i += 3)
    {
        int num = (s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0')*1;
        cout << num;
    }
}