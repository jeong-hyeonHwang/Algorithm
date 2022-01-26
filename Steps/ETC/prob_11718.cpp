//2022.01.26
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    while(true)
    {
        getline(cin, str);
        if(str == "")
            return 0;
        cout << str << '\n';
    }
}