//2022.02.23
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using std::cin;
using std::cout;
using std::sort;
using std::vector;

long long GCD(long long n1, long long n2)
{
    long long origin = n1;
    long long divide = n2;
    long long temp = 0;
    while(divide > 0)
    {
        temp = divide;
        divide = origin%divide;
        origin = temp;
    }
    return origin;
}

void PrintDivisor(long long num)
{
    vector<int> v;
    for(int i = 1; i*i <= num; i++)
    {
        if(num%i == 0)
        {
            if(i*i == num) // if num = 100, i = 10
                v.push_back(i);
            else
            {
                v.push_back(i); // if num = 100, i = 2;
                v.push_back(num/i);
            }
        }
    }
    sort(v.begin(), v.end());
    
    for(int i=1; i< v.size(); i++)
    {
        cout << v[i] << ' ';
    }
}

int main()
{
    int n;
    cin >> n;

    long long* arr = new long long[n];

    for(int i=0; i< n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    long long gcd = 0;
    for(int i=1; i < n; i++)
    {
        gcd = GCD(gcd, arr[i] - arr[i-1]);
    }
    
    PrintDivisor(gcd);
}