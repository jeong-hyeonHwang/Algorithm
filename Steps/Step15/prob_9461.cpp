//2022.02.05
#include <iostream>

using std::cin;
using std::cout;

long Pado(int num)
{
    long p[101]; // long p[num+1] 시 에러
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 2;
    p[5] = 2;
    
    for(int i=6; i<=num; i++)
    {
        p[i] = p[i-1] + p[i-5];
    }
    return p[num];
}

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;

    for(int i=0; i <t; i++)
    {
        cin >> n;
        cout << Pado(n) << '\n';
    }
}