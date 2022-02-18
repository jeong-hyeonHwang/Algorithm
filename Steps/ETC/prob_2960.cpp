//2022.02.18
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n,k;
    cin >> n >> k;
    int t = 0;
    bool* arr = new bool[n+1];
    int startPoint = 2;
    int num = 1;
    int result = 0;
    
    while(t != k)
    {
        
        for(int i=startPoint; i*num <= n; num++)
        {
            if(arr[i*num] == 0)
            {
                arr[i*num] = 1;
                t++;
                result = i * num;
                if(t == k)
                {
                    cout << result;
                    return 0;
                }
            }
        }
        startPoint += 1;
        num = 1;
    }
    cout << result;
}