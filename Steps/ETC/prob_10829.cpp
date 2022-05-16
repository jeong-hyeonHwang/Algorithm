//2022.05.16
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    long long n;
    cin >> n;
    string s = "";

    while(n != 0)
    {
        s += (n % 2) + '0';
        n = n / 2;
    }

    for(int i=s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}