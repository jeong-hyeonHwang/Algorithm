//2022.03.05
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::fixed;

int main()
{
    int n;
    cin >> n;
    double* arr = new double[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }

    double mul = 1;
    double max = 0;
    for(int i = 0; i < n; i++)
    {
        mul = 1;
        for(int j = i; j < n; j++)
        {
            mul *= arr[j];
            if(mul > max)
                max = mul;
        }
    }
    
    cout << fixed;
    cout.precision(3);
    max = round(max * 1000) / 1000;
    cout << max;
}