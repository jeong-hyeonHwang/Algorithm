//2022.01.27
#include <iostream>

using std::cin;
using std::cout;

int num;
int result;
int main()
{
    for(int i=0; i <5; i++)
    {
        cin >> num;
        result += num * num;
    }

    cout << result%10;
}