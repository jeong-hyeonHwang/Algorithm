//2022.01.03
#include <iostream>

int main() 
{
    int num;
    std::cin >> num;
    
    int t = 0;
    for(int i = 1; i <= num; i++)
    {
        t += i;
    }
    
    std::cout << t;
}