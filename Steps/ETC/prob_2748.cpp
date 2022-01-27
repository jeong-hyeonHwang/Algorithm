//2022.01.26-2022.01.27
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    long result = 0;
    long first = 0;
    long second = 1;    
    if(n >= 2)
    {
        for(int i=0; i<n-1; i++)
        {
            result = first + second;
            first = second;
            second = result;
        }
    }
    else
    {
        if(n == 1)
            result = second;
        if(n == 0)
            result = first;
    }
    cout << result;
}