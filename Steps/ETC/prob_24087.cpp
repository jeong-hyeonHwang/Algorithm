//2022.05.19
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int s, a, b;
    cin >> s >> a >> b;

    int price = 250;
    int height = a;
    while(height < s)
    {
        price += 100;
        height += b;
    }

    cout << price;
}