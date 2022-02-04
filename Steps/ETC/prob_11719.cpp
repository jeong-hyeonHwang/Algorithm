//2022.02.04
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    int i = 0;
    while(i < 100)
    {
        getline(cin,str);
        cout << str << '\n';
        i++;
    }
}