//2022.02.20
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
    for(int i=0; i< n; i++)
    {
        if(i % 2 == 0)
            s = "* ";
        else
            s = " *";
        for(int j=0; j<n; j++)
        {
            cout << s;
        }
        cout << '\n';
    }
}