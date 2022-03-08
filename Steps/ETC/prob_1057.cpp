//2022.03.08
#include <iostream>

using std::cin;
using std::cout;

int AbsDif(int a, int b)
{
    return a-b > 0? (a-b) : -(a-b);
}

int main()
{
    int n, k, i;
    int round = 1;
    cin >> n >> k >> i;
    while(n > 0)
    {
        if(AbsDif(k, i) == 1)
        {
            int small = k > i? i : k;
            if(small % 2 == 1)
            {
                cout << round;
                return 0;
            }
        }
        k = k%2 == 0? k/2 : k/2 + 1;
        i = i%2 == 0? i/2 : i/2 + 1;
        n = n%2 == 0? n/2 : n/2 + 1;
        round += 1;
    }
    cout << -1;
}