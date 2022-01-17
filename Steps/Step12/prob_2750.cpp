//2022.01.17
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    int* numArr = new int[n];

    for(int i =0; i < n; i++)
    {
        cin >> numArr[i];
    }
    
    int index = 0;
    for(int i = index; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(numArr[i] > numArr[j])
            {
                std::swap(numArr[i], numArr[j]);
            }
        }
    }

    for(int i =0; i < n; i++)
    {
        cout << numArr[i] << '\n';
    }

}