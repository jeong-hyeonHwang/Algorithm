//2022.02.23
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        if(i != 1)
        {
            for(int j =0; j<2*i -3; j++)
            {
                cout << ' ';
            }
            cout << '*';
        }
        cout << '\n';
    }
}