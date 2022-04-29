//2022.04.29
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int aScore = 100;
    int bScore = 100;
    for(int i=0; i < n; i++)
    {
        cin >> a >> b;
        if(a > b)
        {
            bScore -= a;
        }
        else if(a < b)
        {
            aScore -= b;
        }
    }

    cout << aScore << ' ' << bScore;
}