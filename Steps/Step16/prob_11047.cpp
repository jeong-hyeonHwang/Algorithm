//2022.02.07
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;
    int* coinDevide = new int[n];
    int* coinNum = new int[n];
    for(int i=0; i <n; i++)
    {
        cin >>coinDevide[i];
        coinNum[i] = 0;
    }
    
    coinNum[0] = k/coinDevide[0];
    
    for(int i= 0; i <n-1; i++)
    {
        coinNum[i+1] = coinNum[i]/(coinDevide[i+1]/coinDevide[i]);
        coinNum[i] = coinNum[i]%(coinDevide[i+1]/coinDevide[i]);
    }

    int result = 0;
    for(int i=0; i<n; i++)
    {
        result += coinNum[i];
    }
    cout << result;
}