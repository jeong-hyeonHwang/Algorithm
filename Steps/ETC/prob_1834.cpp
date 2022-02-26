//2022.02.26
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for(int i=1; i<n; i++)
    {
        sum += (n+1)* i;
    }
    cout << sum;
}