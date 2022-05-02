//2022.05.03
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int apple_b1, apple_b2;
    int orange_b1, orange_b2;

    cin >> apple_b1 >> orange_b1;
    cin >> apple_b2 >> orange_b2;

    int case1 = apple_b1 + orange_b2;
    int case2 = apple_b2 + orange_b1;

    if(case1 > case2)
        cout << case2;
    else
        cout << case1;
}