//2022.02.18
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int main()
{
    int n;
    cin >> n;
    int max = 0;
    for(int i=0; i< n; i++)
    {
        int num[3];
        cin >> num[0] >> num[1] >> num[2];
        int sum = 0;
        if(num[0] == num[1] && num[1] == num[2]) // 3 SAME
        {
            sum = 10000 + num[0] * 1000;
        }
        else if(num[0] == num[1]) // 2 SAME
        {
            sum = 1000 + num[0] * 100;
        }
        else if(num[1] == num[2]) // 2 SAME
        {
            sum = 1000 + num[1] * 100;
        }
        else if(num[0] == num[2]) // 2 SAME
        {
            sum = 1000 + num[2] * 100;
        }
        else // NO SAME
        {
            sort(num, num+3);
            sum = num[2] * 100;
        }

        if(max < sum)
            max = sum;

    }

    cout << max;
}
