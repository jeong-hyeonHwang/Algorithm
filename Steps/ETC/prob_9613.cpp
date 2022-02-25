//2022.02.25
#include <iostream>

using std::cin;
using std::cout;

int GCD(int a, int b)
{
    int origin = a > b? a : b;
    int divide = a > b? b : a;
    int temp = 0;
    while(divide > 0)
    {
        temp = divide;
        divide = origin%divide;
        origin = temp;
    }
    return origin;
}

int main()
{
    int t;
    cin >> t;

    long long result = 0;

    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        
        result = 0;
        int* arr = new int[n];
        for(int j = 0; j <n; j++)
        {
            cin >> arr[j];
        }

        for(int j = 0; j < n-1; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                result += GCD(arr[j], arr[k]);
            }
            
        }
        cout << result << '\n';
    }
}