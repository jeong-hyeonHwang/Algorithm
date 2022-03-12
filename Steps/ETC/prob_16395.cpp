//2022.03.12
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

long factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n,k;
    cin >> n >> k;
    vector<long> v;
    v.push_back(1);
    if(n == 1)
    {
        cout << v[0];
        return 0;
    }
    for(int i=1; i <= n; i++)
    {
        long* temp = new long[i+1];
        for(int j = 0; j < i+1; j++)
        {
            if(j != 0 && j != i)
            {
                temp[j] = v[j-1] + v[j];   
            }
            else
                temp[j] = 1;
            
            if(j == k-1 && i == n-1)
            {
                cout << temp[j];
                return 0;
            }
        }
        v.clear();
        for(int t = 0; t < i+1; t++)
        {
            v.push_back(temp[t]);
        }
    }
}