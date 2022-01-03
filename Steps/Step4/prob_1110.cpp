//2022.01.03
#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    if(num < 10)
        num *= 10;
    int n = num;
    int temp10, temp1;
    int i = 0;
    while(true)
    {
        i++;
        temp10 = n / 10;
        temp1 = n % 10;
        int temp = (temp1 +temp10)%10;
        if((temp1 == num / 10) && (temp == num % 10))
        {
            std::cout << i;
            break;
        }
        n = temp1 * 10 + temp;
        //std::cout << n << std::endl;
    }
}