//2022.02.15
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int sum = 0;
    cin >> sum;

    int n = 0;
    for(int i=0; i<9; i++)
    {
        cin >> n;
        sum -= n;
    }

    cout << sum;
}