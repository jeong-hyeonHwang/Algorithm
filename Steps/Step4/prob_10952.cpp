//2022.01.03
#include <iostream>

int main()
{
    int a,b;
    do
    {
        std::cin >> a >> b;
        if(a + b != 0)
            std::cout <<a + b << std::endl;
    } while(a != 0 && b != 0);
}