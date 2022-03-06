//2022.03.06
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    int result = 0;
    for(int i =n/5; i >= 0; i--)
    {
        if((n-5*i)%2 == 0)
        {
            result = i + (n-5*i)/2;
            break;
        }
    }
    if(result == 0)
    {
        cout << -1;
    }
    else
        cout << result;
}

