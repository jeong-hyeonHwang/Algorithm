//2022.02.08
#include <iostream>

using std::cin;
using std::cout;

void Stars(int i, int n)
{
     for(int j=0; j < n-i-1; j++)
        {
            cout <<' ';
        }
        for(int j=0; j < 2*i + 1; j++)
        {
            cout << '*';
        }
        cout << '\n';
}
int main()
{ 
    int n;
    cin >> n;
    for(int i=0; i< n; i++)
    {
        Stars(i,n);
    }
    for(int i=n-2; i>=0; i--)
    {
        Stars(i,n);
    }
}
