//2022.04.14
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    int num;
    int result = 0;
    for(int i=0; i < n; i++)
    {
        cin >> num;
        if(i == n-1)
        {
            result += num;
        }
        else
        {
            result += num - 1;
        }
    }
    cout << result;
}