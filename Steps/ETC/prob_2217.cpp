//2022.02.07
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int main()
{
    int n;
    cin >> n;
    int* rope = new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> rope[i];
    }
    sort(rope, rope+n);
    
    int max = 0;
    for(int i=n-1; i>= 0; i--)
    {
        int currentMaxWeight = (n-i) * rope[i];
        if(max < currentMaxWeight)
            max = currentMaxWeight;
    }
    cout << max;
}