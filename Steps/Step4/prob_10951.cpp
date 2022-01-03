//2022.01.03
#include <iostream>

int main()
{
    int a, b;
    while(true){
        std::cin >> a >> b;
        if(std::cin.eof())
            break;
        std::cout << a+b << std::endl;
    }
}