//2022.04.19
#include<iostream>

using std::cin;
using std::cout;
using std::fixed;

int main() 
{
    int m, k;
    cin >> m;
    int* arr = new int[m];
    int sum = 0;
    for(int i = 0; i <m; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> k;
    
    cout << fixed;
    cout.precision(15);
    double result = 0;

    for(int i = 0; i <m; i++)
    {
        if(arr[i] >= k)
        {
            double num = (double)arr[i];
            double deno = (double)sum;
            double temp = 1.0;
            for(int j =0; j<k; j++)
            {
                temp *= num/deno;
                num -= 1;
                deno -= 1;
            }
            result += temp;
        }
    }
    cout << result;
}