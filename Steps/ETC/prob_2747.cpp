//2022.01.31
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int outN = 0;
    int num1 = 0;
    int num2 = 1;
    if(n >= 2)
    {
        for(int i=2; i<=n; i++)
        {
            outN = num1 + num2;
            num1 = num2;
            num2 = outN;
        }

    }
    else
    {
        if(n == 0)
            outN = num1;
        if(n == 1)
            outN = num2;
    }
    std::cout << outN;
}