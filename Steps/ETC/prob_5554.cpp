//2022.04.03
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int num;
    int result = 0;
    for(int i=0; i<4; i++)
    {
        cin >> num;
        result += num;
    }
    cout << result/60 << '\n' << result%60 ;
}