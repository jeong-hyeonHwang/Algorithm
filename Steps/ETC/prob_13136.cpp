//2022.02.28
#include <iostream>
#include <math.h>

using std::cin;
using std::cout;

int main()
{
    int r, c, n;
    cin >> r >> c >> n;
    int num = r > c ? r : c;
    
    long r1 = r % n != 0? r/n + 1 : r/n;
    long c1 = c % n != 0? c/n + 1 : c/n;
    
        cout << r1 * c1;
}