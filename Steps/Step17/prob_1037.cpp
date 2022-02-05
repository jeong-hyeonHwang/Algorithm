//2022.02.05
//주어지는 약수의 최소값 * 약수의 최대값 = 구하고자하는 숫자
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n = 0;
    cin >> n;
    int num = 0;
    long min = 1000000;
    long max = 0;
    for(int i=0; i < n; i++)
    {
        cin >> num;
        if(min > num)
            min = num;
        if(num > max)
            max = num;
    }

    cout << min * max;
}