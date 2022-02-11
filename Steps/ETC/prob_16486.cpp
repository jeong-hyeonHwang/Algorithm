//2022.02.11
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;

int main()
{
    int d1 = 0;
    float d2 = 0;
    cin >> d1 >> d2;
    
    cout << fixed;
    cout.precision(6);
    cout << d1 * 2 + d2* 2 * 3.141592;
}