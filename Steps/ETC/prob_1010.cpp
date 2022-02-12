//2022.02.12
#include <iostream>

using std::cin;
using std::cout;


long long Combination(int _m, int _n)
{
    long long result = 1;
    
    int t = 1;
    for(int j = _m; j > _n; j--)
    {
        result *= j;
        result = result/t;
        t++;
    }
    return result;
}

int main()
{
    int num;
    cin >> num;
    int n =0;
    int m =0;
    for(int i=0; i<num; i++)
    {
        cin >> n >> m;
        cout << Combination(m,n)<<'\n';
    }
}