//2022.01.03
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int num;
    std::cin >> num;
    int a,b;
    int arr[num];
    
    for(int i=0; i<num; i++)
    {
        std::cin >> a >> b;
        arr[i] = a + b;
    }
    
    for(int i=0; i<num; i++)
    {
        std::cout << arr[i] << '\n';    
    }
}