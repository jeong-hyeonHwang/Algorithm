//2022.02.15-2022.02.16
#include <iostream>

using std::cin;
using std::cout;


int a[2];
int b[2];

int DevideTarget(int a, int b)
{
    int temp = 0;
    int origin = a > b? a : b;
    int devide = a > b? b : a;
    
    if(origin == 1)
    {
        return 1;
    }
    while(devide > 0)
    {
        temp = devide;
        devide = origin%devide;
        origin = temp;
    }
    return origin;
}

int main()
{
    
    cin >> a[0] >> b[0] >> a[1] >> b[1];
    
    int upside = a[0] * b[1] + b[0] * a[1];
    int downside = b[0]*b[1];
    
    int t = DevideTarget(upside, downside);
    
    upside /= t;
    downside /= t;
    cout << upside << ' ' << downside;
}