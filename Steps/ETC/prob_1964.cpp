//2022.02.20
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    long long pointNum = 5;
    long long plusNum = 7;
    for(int i=1; i<n; i++)
    {
        pointNum += plusNum;
        plusNum += 3;
    }
    cout << pointNum % 45678;
}