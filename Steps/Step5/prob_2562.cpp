//2022.01.04
#include <iostream>
#include <array>

int main()
{
    std::array<int, 9> arr;
    for(int i =0; i < arr.size(); i++)
    {
        std::cin >> arr[i];
    }
    
    int index = 0;
    int max = arr[index];
    for(int i =1; i < arr.size(); i++)
    {
        if(max < arr[i])
        {
            index = i;
            max = arr[index];
        }
    }
    std::cout << arr[index] << '\n';
    std::cout << index + 1;
}