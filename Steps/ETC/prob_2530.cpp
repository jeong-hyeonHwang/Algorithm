//2022.02.17
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long secTime = a*3600 + b*60 + c;
    long resultTime = secTime + d;

    while(resultTime >= 86400)
    {
        resultTime -= 86400;
    }
    int h = (resultTime/3600);

    int m = (resultTime%3600)/60;
    int s = resultTime%60;

    cout << h << ' ' << m << ' ' << s;

}