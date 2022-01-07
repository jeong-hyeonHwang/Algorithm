//2022.01.06_2022.01.07

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int i = 1;
    while(x > i)
    {
        x -= i;
        i++;
    }

    if(i % 2 == 0)
    {
        cout << x << "/" << i + 1 - x;
    }
    else
    {
        cout << i + 1 - x << "/" << x;
    }
    
}