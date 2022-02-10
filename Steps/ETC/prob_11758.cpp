//2022.02.10
//CCW
#include <iostream>

using std::cin;
using std::cout;
int main()
{
    int x[3];
    int y[3];
    
    for(int i=0; i<3; i++)
    {
        cin >> x[i] >> y[i];
    }

    int n1 = x[0]*y[1] + x[1]*y[2] + x[2]*y[0];
    int n2 = y[0]*x[1] + y[1]*x[2] + y[2]*x[0];

    if(n1 - n2 == 0)
        cout << 0;
    else if(n1 - n2 > 0)
        cout << 1;
    else
        cout << -1;

}