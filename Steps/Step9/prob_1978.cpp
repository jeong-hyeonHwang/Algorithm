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
    int n;
    cin >> n;

    int* num = new int[n];
    int count = 0;
    for(int i =0; i < n; i++)
    {
        cin >> num[i];
        if(IsPrime(num[i]) == true)
            count += 1;
    }

    cout << count;
}