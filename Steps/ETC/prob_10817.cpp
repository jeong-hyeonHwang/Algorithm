//2022.01.23
#include <iostream>

using std::cin;
using std::cout;

void qS(int left, int right, int arr[])
{
    if(left >= right)
    {
        return;
    }
    
    int i = left;
    int &pivot = arr[right];
    for(int j = left; j < right; ++j)
    {
        if(arr[j] < pivot)
        {
            std::swap(arr[i++], arr[j]);
        }
    }
    std::swap(arr[i], pivot);
        
        qS(left, i-1, arr);
        qS(i+1, right, arr);
    
}

int main()
{
    int size = 3;
    int num[size];
    for(int i=0; i<size; i++)
    {
        cin >>  num[i];
    }

    qS(0, size, num);
    cout << num[1];
}