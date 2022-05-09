//2022.05.09
#include <iostream>

using std::cin;
using std::cout;

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << diff(a, b);
}