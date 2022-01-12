//2022.01.12
#include <iostream>

int factorial(int n)
{
    if(n != 0)
        return n*factorial(n-1);
    else
        return 1;
}
int main()
{
    int n;
    std::cin >> n;
    int result = factorial(n);

    std::cout << result;
}