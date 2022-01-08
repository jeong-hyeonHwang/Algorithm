//2022.01.08
#include <iostream>

using namespace std;

bool IsPrime(int num)
{
    if(num == 1)
        return false;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
            return false;
        else
            continue;
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;

    int len = n - m + 1;
    int* num = new int[len];
    int sum = 0;
    int min = n + 1;
    for(int i =0; i < len; i++)
    {
        num[i] = m + i;
        if(IsPrime(num[i]) == true)
        {
            sum += num[i];
            if(min > num[i])
                min = num[i];
        }

    }

    if(sum != 0)
    {
        cout << sum << '\n';
        cout << min;
    }
    else
    {
        cout << -1 << '\n';
    }
}