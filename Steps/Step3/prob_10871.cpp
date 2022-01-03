//2022.01.03
#include <iostream>

int main()
{
    int n, x;
    std::cin >> n >> x;
    
    int num[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        if(x > num[i])
            std::cout << num[i] << " ";
    }
}