//2022.02.14
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    long long n = 0;
    long long m = 0;
    cin >> n >> m;
    if(n > m)
        cout << n-m;
    else
        cout << m-n;
}