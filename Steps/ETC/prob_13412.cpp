//2022.04.04
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

long GCD(long n1, long n2)
{
    long origin = n2;
    long divide = n1;
    long temp;
    while(divide != 0)
    {
        temp = divide;
        divide = origin%temp;
        origin = temp;
    }

    return temp;
}

int CoprimeCounter(long n)
{
    int count = 0;
    for(long k=1; k <= sqrt(n); k++)
    {
        if(n%k == 0)
        {
            if(GCD(k, n/k) == 1)
            {
                count += 1;
            }
        }
    }

    return count;
}
int main()
{
    int caseT;
    cin >> caseT;
    long num;
    for(int i=0; i < caseT; i++)
    {
        cin >> num;
        cout << CoprimeCounter(num) << '\n';
    }
}