//2022.04.07
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int r, b;
    cin >> r >> b;
    
    int temp = (r - 4)/2;
    int l = 0;
    int w = 0;
    for(int i=1; i <= temp - 1; i++)
    {
        if(i * (temp - i) == b)
        {
            l = i > temp - i? i : temp-i;
            w = i > temp - i? temp-i : i;
            break;
        }
    }

    cout << l + 2 << ' ' << w + 2;
}