//2022.02.21
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, T;
    cin >> n >> T;
    int sum = 0;
    int workHour = 0;
    int maxWork = 0;
    for(int i=0; i<n; i++)
    {
        cin >> workHour;
        sum += workHour;
        if(T >= sum)
            maxWork++;
    }
    cout << maxWork;
}