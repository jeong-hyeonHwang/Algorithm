//2022.01.06
#include <iostream>

using namespace std;

int main()
{
    long a, b, c;
    cin >> a >> b >> c;
    
    int b_ePoint;
    if(c - b <= 0)
        b_ePoint = -1;
    else
        b_ePoint = a/(c-b) + 1;

    cout << b_ePoint;
}