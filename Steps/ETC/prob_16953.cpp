//2022.03.09
//Overflow 주의
//long 주의
//count parameter 중요
#include <iostream>

using std::cin;
using std::cout;

int a, b;
int min = 100000000;

void Find(long currentValue, int count)
{
    if(currentValue > b)
    {
        return;
    }
    else if(currentValue == b)
    {
        if(min > count)
            min = count;
        return;
    }
    
    Find(currentValue * 2, count + 1);
    Find(currentValue * 10 + 1, count + 1);
    
}

int main()
{
    cin >> a >> b;
    Find(a, 0);
    if(min == 100000000)
        cout << -1;
    else
        cout << min + 1;
}