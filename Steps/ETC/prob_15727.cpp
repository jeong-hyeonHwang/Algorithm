//2022.02.19
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    int t = 0;
    if(n / 5 != 0)
    {
        t += n/5;
        n = n%5;
    }
    
    if(n / 4 != 0)
    {
        t += n/4;
        n = n%4;
    }
    
    if(n / 3 != 0)
    {
        t += n/3;
        n = n%3;
    }
    if(n / 2 != 0)
    {
        t += n/2;
        n = n%2;
    }
    if(n / 1 != 0)
    {
        t += n/1;
        n = n%1;
    }
    cout << t;
}