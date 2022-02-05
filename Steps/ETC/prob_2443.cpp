//2022.02.05
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i < n; i++)
    {
        for(int j=0; j <i; j++)
        {
            cout << ' ';
        }
        for(int j=0; j < 2*n-(2*i+1); j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}