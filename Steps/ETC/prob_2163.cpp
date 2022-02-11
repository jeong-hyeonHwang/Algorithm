//2022.02.11
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n =0;
    int m =0;
    cin >> n >> m;
    cout << n*m - 1;
    // CASE01
    // (n-1) + n*(m-1);
    // n - 1 + nm - n
    // nm-1
    
    // CASE02
    // (m-1) + m*(n-1);
    // m - 1 + nm - m
    // nm - 1
}