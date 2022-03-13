//2022.03.13
#include <iostream>
#define SIZE 1001

using std::cin;
using std::cout;

int main()
{
    int n, k;
    cin >> n >> k;

    int pascal[SIZE][SIZE];
    for(int i= 1; i <= n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
            {
                pascal[i][j] = 1;
                continue;
            }
            pascal[i][j] = (pascal[i-1][j-1] + pascal[i - 1][j])%10007;
        }
    }
    cout << pascal[n][k];
}