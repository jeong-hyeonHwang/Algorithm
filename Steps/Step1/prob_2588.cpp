//2022.01.01
#include <iostream>

int main()
{
    int a;
    int b;
    
    std::cin >> a >> b;
    
    int b1 = int(b%10);
    int b100 = int(b/100);
    int b10 = (int)(b/10 - (b100 * 10));

    std::cout << a * b1 << std::endl;
    std::cout << a * b10 << std::endl;
    std::cout << a *b100 << std::endl;
    std::cout << a * b << std::endl;
}