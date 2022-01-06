//2022.01.06
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int line = 0;

    int result = 1;
    int range = 1;
    while(true)
    {
        range += line * 6;
        if(n > range)
        {
            result+= 1;
            line += 1;
        }
        else
        {
            break;
        }
    }
    cout << result;
}