//2022.03.11
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;


long GCD(long n1, long n2)
{
    long origin = n2;
    long divide = n1;
    long temp = divide;
    while(divide > 0)
    {
        temp = divide;
        divide = origin%divide;
        origin = temp;
    }
    return temp;
}

int main()
{
    //cout << GCD(5, 10);
    int n;
    cin >> n;
    long* arr = new long[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    long gcd = arr[2];
    for(int i=1; i >= 0; i--)
    {
        gcd = GCD(arr[i], gcd);
    }
    
    for(int i = 1; i <= gcd; i++)
    {
        if(gcd % i == 0)
            cout << i << '\n';
    }
}