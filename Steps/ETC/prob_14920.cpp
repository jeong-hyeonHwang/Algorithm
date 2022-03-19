//2022.03.19
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    while(true)
    {
        if(n == 1)
            break;

        if(n%2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = 3 * n + 1;
        }
        count += 1;
    }

    cout << count;
}