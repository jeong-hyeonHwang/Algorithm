//2022.02.05
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int t;
    cin >> t;

    if(t%10 != 0) // 1초 단위일 경우
    {
        cout << -1;
    }
    else
    {
        cout << t/300 << ' ';
        cout << (t%300)/60 << ' ';
        cout << (t%60)/10;
    }
}