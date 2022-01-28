//2022.01.28
#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    cin >> str;
    for(int i =0; i < str.size(); i++)
    {
        cout<<str[i];
        if((i+1) % 10 == 0)
            cout << '\n';
    }
}