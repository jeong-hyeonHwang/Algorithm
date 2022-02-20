//2022.02.20
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int main()
{
    int arr[5];
    int sum = 0;

    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+5);
    
    cout << sum/5 << '\n';
    cout << arr[2];
}