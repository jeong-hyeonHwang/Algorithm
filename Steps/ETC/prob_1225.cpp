//2022.05.12
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string a, b;
    cin >> a >> b;

    long long result = 0;
    for(int i=0; i < a. size(); i++)
    {
        for(int j=0; j < b.size(); j++)
        {
            result += (a[i]-'0') * (b[j]-'0');
        }
    }

    cout << result;
}