//2022.02.24
//자료형 주의!
#include <iostream>

using std::cin;
using std::cout;

void LCM(long long n1, long long n2)
{
    long long origin = n1 > n2? n1 : n2;
    long long divide = n1 > n2? n2 : n1;
    long long temp = divide;
    
    while(divide > 0)
    {
        temp = divide;
        divide = origin%divide;
        origin = temp;
    }
    cout << n1 * n2 / temp;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    LCM(a,b);
}

