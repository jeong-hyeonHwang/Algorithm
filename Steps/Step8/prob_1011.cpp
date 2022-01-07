//2022.01.08
#include <iostream>
#include <cmath>
#include<cstdio>

using namespace std;

long long MoveTime(long long s, long long e)
{
    long long n = 0;
    while(e-s >= n*n)
    {
        n++;
    };
    n-=1;
    long long maxMove = 2*n - 1;
    int left = e-s-n*n;
    return maxMove + (long long)ceil((float)left/n);
}

int main()
{
    int t;
    cin >> t;

    long long sP, eP;
    for(int i =0; i <t; i++)
    {
        cin >> sP >> eP;
        printf("%lld\n",MoveTime(sP, eP));
    }
}