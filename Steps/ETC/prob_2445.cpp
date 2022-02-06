//2022.02.06
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    for(int i=0; i<2*n-1; i++)
    {

        if(i < n)
            count += 1;
        else
            count -= 1;

        for(int j=0; j<count; j++)
            cout << '*';
        for(int j=0; j<2*(n-count); j++)
            cout << ' ';
        for(int j=0; j<count; j++)
            cout << '*';
        cout << '\n';
    }
}