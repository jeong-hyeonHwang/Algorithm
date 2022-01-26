//2022.01.26
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for(int i=n; i > 0; i--)
    {
        for(int j=0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}