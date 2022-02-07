//2022.02.07
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    long s;
    cin >> s;
    int minus = 1;
    while(s-minus > minus)
    {
        s = s-minus;
        minus += 1;
    }
    cout << minus;
}