//2022.02.22
#include <iostream>

using std::cin;
using std::cout;

long long FindGCD(long long a, long long b)
{
    long long origin = a > b? a:b;
    long long divide = a > b? b:a;
    long long temp = 0;
    while(divide != 0)
    {
        temp = divide;
        divide = origin%divide;
        origin = temp;
    }
    return origin;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    for(int i=0; i < FindGCD(a, b); i++)
    {
        cout << 1;
    }
}