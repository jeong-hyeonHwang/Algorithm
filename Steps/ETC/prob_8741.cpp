//2022.02.28
#include <iostream>
#include <string>
#include <math.h>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    cin >> n;
    
    for(int i=0; i < n; i++)
        cout << 1;
    for(int i=0; i < n-1; i++)
        cout << 0;
}