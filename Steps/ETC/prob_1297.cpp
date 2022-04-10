//2022.04.10
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{
    double D, H, W;
    cin >> D >> H >> W;
    cout << (int)(D/sqrt(H * H + W * W) * H) << ' ' << (int)(D/sqrt(H * H + W * W) * W);
}