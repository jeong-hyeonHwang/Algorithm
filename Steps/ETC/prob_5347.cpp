//2022.03.28
#include <iostream>

using std::cin;
using std::cout;

int GCD(int a, int b)
{
    int origin = a > b? a : b;
    int divide = a > b? b : a;
    int temp = divide;
    while(divide != 0)
    {
        temp = divide;
        divide = origin % divide;
        origin = temp;
    }

    return origin;
}

int main()
{
    int n;
    cin >> n;
    long long a, b;
    for(int i=0; i <n; i++)
    {
        cin >> a >> b;
        cout << a * b / GCD(a, b) << '\n';
    }
}