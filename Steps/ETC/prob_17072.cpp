//2022.04.27
#include <iostream>

using std::cin;
using std::cout;

int n, m;

char ascii(int r, int g, int b)
{
    long temp = r * 2126 + 7152 * g + 722 * b;
    char result = '0';
    if(temp < 510000)
        result = '#';
    else if(temp < 1020000)
        result = 'o';
    else if(temp < 1530000)
        result = '+';
    else if(temp < 2040000)
        result = '-';
    else
        result = '.';

    return result;
}
int main()
{
    cin >> n >> m;
    int** arr = new int*[n];
    for(int i =0; i <n; i++)
    {
        arr[i] = new int[3 * m];
        for(int j =0; j <3 * m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i =0; i <n; i++)
    {
        for(int j =0; j <3*m;)
        {
            cout << ascii(arr[i][j], arr[i][j+1], arr[i][j+2]);
            j = j + 3;
        }
        cout << '\n';
    }
}
