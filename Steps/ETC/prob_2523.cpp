//2022.02.04
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j < i+1; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    for(int i= n-1; i>0; i--)
    {
        for(int j=0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}