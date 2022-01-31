//2022.01.31
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int sum = 0;
    int min = 100;
    int n = 0;
    for(int i=0 ;i<7; i++)
    {
        cin >> n;
        if(n%2 == 1)
        {
            sum += n;
            if(min > n)
                min = n; 
        }
    }
    if(sum == 0)
        cout << -1;
    else
    {
        cout << sum << '\n';
        cout << min;
    }
}