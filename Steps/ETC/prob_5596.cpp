//2022.04.17
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b, c, d;
    int S = 0;
    int T = 0;
    cin >> a >> b >> c >> d;
    S = a + b + c + d;
    cin >> a >> b >> c >> d;
    T = a + b + c + d;
    if(S >= T)
        cout << S;
    else
        cout << T;
}