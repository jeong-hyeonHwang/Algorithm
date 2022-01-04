//2022.01.04
#include <iostream>
#include <array>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int *arr = new int[t];
    for(int i =0; i < t; i++)
    {
        std::cin >> arr[i];
    }
    
    int m = arr[0];
    for(int i =1; i <t; i++)
    {
        if(m < arr[i])
            m = arr[i];
    }
    cout.precision(10);    
    float sum = 0;
    for(int i =0; i<t; i++)
    {
        sum += (float)arr[i]/m*100;
    }
    delete[] arr;
    cout << sum/t;
    
}