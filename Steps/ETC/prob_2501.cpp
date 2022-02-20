//2022.02.20
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    int num = 1;
    while(n >= num)
    {
        if(n % num == 0)
        {
            count += 1;
            if(count == k)
            {
                cout << num;
                return 0;
            }
        }
        num += 1;
    }
    cout << 0;
}