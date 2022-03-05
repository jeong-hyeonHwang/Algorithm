//2022.03.05
#include <iostream>

using std::cin;
using std::cout;

int num10(int num)
{
    int result = 0;
    while(num > 0)
    {
        result += num%10;
        num = num/10;
    }
    return result;
}

int num12(int num)
{
    int result = 0;
    while(num > 0)
    {
        result += num%12;
        num = num/12;
    }
    return result;
}

int num16(int num)
{
    int result = 0;
    while(num > 0)
    {
        result += num%16;
        num = num/16;
    }
    return result;
}
int main()
{
    for(int i = 1000; i < 10000; i++)
    {
        int re10 = num10(i);
        int re12 = num12(i);
        int re16 = num16(i);

        if(re10 == re12 && re12 == re16)
            cout << i << '\n';
    }
}
