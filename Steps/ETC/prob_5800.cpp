//2022.02.20
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int main()
{
    int k;
    cin >> k;
    for(int i=0; i<k; i++)
    {
        int len;
        cin >> len;
        int* arr = new int[len];
        int dif = 0;
        for(int j= 0; j < len; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr+len);
        for(int j=0; j < len-1; j++)
        {
            if(dif < arr[j+1] - arr[j])
                dif = arr[j+1] - arr[j];
        }
        cout << "Class " << i+1 << '\n';
        cout << "Max " << arr[len-1] << ", ";
        cout << "Min " << arr[0] << ", ";
        cout << "Largest gap " << dif << '\n';
    }
}