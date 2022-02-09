//2022.02.09
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >>n;
    int count = 0;
    for(int i=0; i<2*n-1; i++)
    {
        if(i >= n)
        {
            count -= 1;
        }
        else
        {
            count += 1;
        }
        
        for(int j=0; j< n-count; j++)
        {
            cout << ' ';
        }
        for(int j=0; j< count; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}