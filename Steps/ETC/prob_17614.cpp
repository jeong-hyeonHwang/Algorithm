//2022.04.01
#include <iostream>

using std::cin;
using std::cout;

int count = 0;

void Count(int num)
{
    while(num != 0)
    {
        if(num % 10 == 3)
        {
            count += 1;
        }
        else if(num % 10 == 6)
        {
            count += 1;
        }
        else if(num % 10 == 9)
        {
            count += 1;
        }
        num = num / 10;
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        Count(i);
    }

    cout << count;
}
