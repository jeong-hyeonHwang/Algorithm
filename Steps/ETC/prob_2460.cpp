//2022.02.13
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int result = 0;
    int max = 0;
    int in = 0;
    int out = 0;
    for(int i=0; i< 10; i++)
    {
        cin >> out >> in;
        result = result - out + in;
        if(max < result)
            max = result;
    }
    cout << max;
}