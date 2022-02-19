//2022.02.19
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int HowManyVowel(string s)
{
    int sum = 0;
    for(int i=0; i< s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'A')
        {
            sum += 1;
        }
        else if(s[i] == 'e' || s[i] == 'E')
        {
            sum += 1;
        }
        else if(s[i] == 'i' || s[i] == 'I')
        {
            sum += 1;
        }
        else if(s[i] == 'o' || s[i] == 'O')
        {
            sum += 1;
        }
        else if(s[i] == 'u' || s[i] == 'U')
        {
            sum += 1;
        }
    }
    return sum;
}

int main()
{
    string s;
    while(true)
    {
        getline(cin, s);
        if(s == "#")
            break;
        cout << HowManyVowel(s) << '\n';
    }
}