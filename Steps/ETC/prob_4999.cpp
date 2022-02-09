//2022.02.09
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string me;
    string doc;

    cin >> me;
    cin >> doc;

    if(me.size() >= doc.size())
        cout << "go";
    else
        cout << "no";   
}