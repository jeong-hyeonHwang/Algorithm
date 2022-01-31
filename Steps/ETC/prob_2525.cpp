//2022.01.31
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int cH = 0;
    int cM = 0;
    int takenT = 0;

    cin >> cH >> cM >> takenT;

    int time = cH * 60 + cM +takenT;

    if(time > 1439) // 23:59
        time -= 1440;
    cout << time/60 << ' ' << time%60;
}