//2022.02.22
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int small = n/2;
    int big = n % 2 != 0? small+1 : small;
    int starCount = 0;
    while(starCount < n*n)
    {
        for(int i=0; i<big; i++)
        {
            cout << "* ";
        }
        cout << '\n';
        for(int i=0; i<small; i++)
        {
            cout <<" *";
        }
        cout << '\n';
        starCount += n;
    }
}