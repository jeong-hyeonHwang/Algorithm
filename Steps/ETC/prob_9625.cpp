//2022.02.21
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int k;
    cin >> k;
    
    int a[46];
    int b[46];
    
    a[0] = 0;
    a[1] = 1;
    b[0] = 1;
    b[1] = 1;
    for(int i = 2; i<= k; i++)
    {
        a[i] = b[i-1];
        b[i] = a[i-1] + b[i-1];
    }
    
    cout << a[k-1] << ' ' << b[k-1];
}