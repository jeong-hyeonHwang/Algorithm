//2022.01.04
//brute force
#include <iostream>

int HanSu(int num)
{
    int result = 0;
    if(num < 100)
    {
        result = num;
    }
    else
    {
        result = 99;

        int num1 = 0;
        int num10 = 0;
        int num100 = 0;
        for(int i = 100; i < num + 1; i++)
        {
            num100 = i/100;
            num10 = i%100/10;
            num1 = i%10;
            
            if(num100 - num10 == num10 - num1)
                result += 1;
        }
    }
    return result;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << HanSu(n);
}
