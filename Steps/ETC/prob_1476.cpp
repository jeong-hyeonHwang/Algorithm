//2022.01.31
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int e, s, m;
    cin >> e >> s >> m;
    int _e = 1;
    int _s = 1;
    int  _m = 1;
    int count = 1;
    while(!(_e == e && _s == s && _m == m) )
    {
        if(_e < 15)
            _e++;
        else
            _e = 1;
        if(_s < 28)
            _s++;
        else
            _s = 1;
        if(_m < 19)
            _m++;
        else
            _m = 1;
        count++;
    }

    cout << count;
}