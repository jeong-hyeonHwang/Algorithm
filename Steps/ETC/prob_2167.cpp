//2022.02.09
#include <iostream>

using std::cin;
using std::cout;

int** arr;

int Calculate(int i, int j, int x, int y)
{
    int result = 0;
    for(int t = i; t <= x; t++)
    {
        for(int q = j; q <= y; q++)
        {
            result += arr[t][q];
        }
    }
    return result;
}

int main()
{
    int n = 0;
    int m = 0;
    cin >> n >> m;

    arr = new int*[n];
    for(int i=0; i< n; i++)
    {
        arr[i] = new int[m];
    }

    for(int i=0; i< n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int caseT = 0;
    cin >> caseT;
    for(int k=0; k< caseT; k++)
    {
        int i = 0;
        int j = 0;
        int x = 0;
        int y = 0;

        cin >> i >> j >> x >> y;
        cout << Calculate(i-1,j-1,x-1,y-1) << '\n';
    }
}