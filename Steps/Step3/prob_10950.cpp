//2022.01.03
#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    
    int arr[num];
    
    int a, b;
    
    for(int i =0; i < num; i++)
    {
        std::cin  >> a >> b;
        arr[i] = a + b;
    }
    
    for(int i =0; i < num; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}