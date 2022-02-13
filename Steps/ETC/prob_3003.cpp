//2022.02.13
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int chess[6] = {1,1,2,2,2,8};
    int input[6];
    for(int i=0; i < 6; i++)
    {
        cin >> input[i];
        input[i] = chess[i] - input[i];
    }

    for(int i=0; i < 6; i++)
    {
        cout << input[i] << ' ';
    }
}