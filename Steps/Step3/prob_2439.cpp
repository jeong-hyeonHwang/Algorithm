//2022.01.03
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for(int i =1; i <= n; i++)
    {
        for(int t = i; t <= n - 1; t++)
            std::cout << " ";
        for(int j = 1; j <= i; j++)
            std::cout << "*";
        std::cout<< '\n';
    }
}