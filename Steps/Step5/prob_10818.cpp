//2022.01.04
#include <iostream>

int main()
{
    int len;
    std::cin >> len;
    int arr[len];
    for(int i =0; i <len; i++)
    {
        std::cin >> arr[i];
    }
    
    int min,max;
    min = arr[0];
    max = arr[0];
    
    for(int i =1; i < len; i++)
    {
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
            max = arr[i];
    }
    std::cout << min << " " << max;
    
}