//2022.04.20
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    cin >> s;
    char temp = s[0];
    int sum = 10;
    for(int i = 1; i < s.size(); i++)
    {
        
        if(temp == s[i])
        {
            sum += 5;
        }
        else
        {
            sum += 10;
        }
        temp = s[i];
    }
    cout << sum;
}