//2022.01.11
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int x1, y1, r1, x2, y2, r2;
    double d, result;
    for(int i =0; i <t; i++)
    {
        cin >> x1 >> y1 >> r1;
        cin >> x2 >> y2 >> r2;

        d = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
        double sub = r1 > r2 ? r1-r2: r2-r1;

        if(d == 0 && r1 == r2)
            result = -1;
        else if(r1+r2 == d || sub == d)
            result = 1;
        else if(sub < d && d < r1+r2)
            result = 2;
        else
            result = 0;
        cout << result << '\n';
    }
}