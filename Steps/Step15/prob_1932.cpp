//2022.03.14
#include <iostream>

using std::cin;
using std::cout;

int n;
int** triangle;

int main()
{    
    cin >> n;
    triangle = new int*[n];
    for(int i=0; i < n; i++)
    {
        triangle[i] = new int[n];
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cin >> triangle[i-1][j];
        }
    }
    
    for(int i = n-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            int max = triangle[i][j-1] > triangle[i][j]? triangle[i][j-1] : triangle[i][j];
            triangle[i-1][j-1] += max;
        }
    }
    cout << triangle[0][0];
}