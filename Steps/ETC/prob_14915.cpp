//2022.02.25
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int m, n;
    cin >> m >> n;
    int temp = m;
    string result = "";
    if(m == 0)
    {
        cout << 0;
        return 0;
    }
    while(m > 0)
    {
        char num = 't';
        if(m%n <= 9)
        {
            num = (char)(m%n + '0');
        }
        else
        {
            num = (char)(m%n + 55);
        }
        m = m/n;
        result += num;
    }
    
    for(int i = result.size() - 1; i >= 0; i--)
    {
        if(i == result.size() - 1 && result[i] == '0')
            continue;
        else
            cout << result[i];
    }
}