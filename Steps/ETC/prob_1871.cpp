//2022.05.01
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int difference(int a, int b)
{
    if(a > b)
        return a - b;
    else
        return b - a;
}

int calculate(int startP, int endP)
{
    int result = 0;
    int multiple = 1;
    for(int i = startP; i < endP; i++)
    {
        result += (i - '0') * multiple;
        multiple *= 26;
    }
}

int main()
{
    int n;
    cin >> n;

    string s;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        int dif = difference(calculate(0,3), calculate(4, s.size()));
        if(dif <= 100)
            cout << "nice";
        else
            cout << "not nice";
        cout << '\n';
    }
}