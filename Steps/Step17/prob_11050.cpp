//2022.02.05
#include <iostream>

using std::cin;
using std::cout;

int factorial(int t)
{
    if(t != 0)
        return t*factorial(t-1);
    else
        return 1;
}
int main()
{
    int n, k;
    cin >> n >> k;
    if(k > n || k < 0)
    {
        cout << 0;
    }
    else
    {
        cout << factorial(n)/(factorial(k)*factorial(n-k));
    }
}