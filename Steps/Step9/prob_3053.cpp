//2022.01.11
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r;
    cin >> r;

    cout << fixed;
    cout.precision(6);
    cout << (double)r*r*M_PI <<'\n';
    cout << (double)2*r*r;
}