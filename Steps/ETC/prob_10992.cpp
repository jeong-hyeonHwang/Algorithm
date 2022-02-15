//2022.02.15
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<= n-1; i++)
    {
        for(int j = n-i; j> 0; j--)
            cout << ' ';

        cout << '*';

        for(int j = 0; j < 2*(i-1) - 1; j++)
            cout << ' ';
        
        if(i!= 1)
            cout << '*';
            
        cout << '\n';
        
    }

    for(int i=0; i< 2*n - 1; i++)
    {
        cout << '*';
    }
}