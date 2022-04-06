//2022.04.06
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int t = 1;
    int count = 0;
    for(int i = 1; n - i * 3 >= 6; i++)
    {
        int temp = n - i * 3;
        for(int j = 1; temp - j * 3 >= 3; j++)
        {
            count += 1;
        }
    }
    cout << count;
}