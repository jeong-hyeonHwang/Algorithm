//2022.01.12
#include <iostream>

int num(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return num(n-2) + num(n-1);
}

int main()
{
    int n;
    std::cin >> n;
    std::cout <<num(n);
}