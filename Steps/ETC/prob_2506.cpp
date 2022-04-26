//2022.04.26
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int num;
    int sum =0;
    int before = 0;
    int plusFor = 1;
    for(int i=0; i < n; i++)
    {
        cin >> num;
        if(num == 1)
        {
            if(before == 1)
                plusFor += 1;
            else
                plusFor = 1;
        }
        else
        {
            plusFor = 0;
        }
        sum += plusFor;
        before = num;
    }
    cout << sum;
}