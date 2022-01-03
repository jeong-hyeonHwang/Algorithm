//2022.01.03
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int num;
    std::cin >> num;
    int a[num];
    int b[num];
    int arr[num];
    
    for(int i=0; i<num; i++)
    {
        std::cin >> a[i] >> b[i];
        arr[i] = a[i] + b[i];
    }
    
    for(int i=0; i<num; i++)
    {
        std::cout << "Case #" << i+1 << ": " << a[i] << " + " << b[i] << " = " << arr[i] << '\n';    
    }
}