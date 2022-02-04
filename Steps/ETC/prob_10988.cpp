//2022.02.04
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

string str;
int middle;

int PalindromeCheck()
{
    middle = str.size()/2;
    for(int i=0; i < middle; i++)
    {
        if(str[i] != str[str.size()-1-i])
            return 0;
    }
    return 1;
}
int main()
{
    str;
    cin >> str;
    cout <<PalindromeCheck();
}