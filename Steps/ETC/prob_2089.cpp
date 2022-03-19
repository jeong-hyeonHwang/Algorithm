//2022.03.19
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void DecimalToBinary(long long n)
{
    string s = "";
    long long left = 0;
    long long origin = n;
    long long temp = origin;
    
    if(n == 0)
    {
        cout << 0;
        return;
    }
    
    while(temp != 0)
    {
        temp = origin;
        origin = origin / -2;
        left = temp % -2;
        if(left < 0)
        {
            origin += 1;
            left = -left;
        }
        s += left + '0';
    }

    bool zeroCheck = false;
    for(long long i=s.size()-1; i >= 0; i--)
    {
        if(s[i] == '1')
        {
            zeroCheck = true;
            cout << s[i];
        }
        else if(zeroCheck == true && s[i] == '0')
        {
            cout << s[i];
        }
    }
}
int main()
{
    long long n;
    cin >> n;
    DecimalToBinary(n);
}