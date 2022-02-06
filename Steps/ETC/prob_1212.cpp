//2022.02.06
#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::string;

void Change8to2(string s)
{
    int n = 0;
    for(int i=0; i < s.size(); i++)
    {
        n = s[i]-'0';
        int n0 = n%2;
        int n1 = (n/2)%2;
        int n2 = (n/4)%2;
        
         
        if(i==0)
        {
            if(n2 == 0 && n1 == 0)
                cout << n0;
            else if(n2 == 0)
                cout << n1 << n0;
            else
                cout << n2 << n1 << n0;
        }
        else
            cout << n2 << n1 << n0;
        
    }
}
int main()
{
    string str8 = "";
    cin >> str8;
    Change8to2(str8);
}