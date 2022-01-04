//2022.01.04
//brute force
#include <iostream>

void SelfNumber()
{
    int* arr = new int[10001];

    int num = 0;
    for(int i = 1; i <10001; i++)
    {
        //arr[i] = 0;
        num = i;
        while(num <= 10000)
        {            
            int result = num;
            while(result != 0)
            {
                num += result%10; 
                result = result/10;
            }
            if(num <= 10000)
                arr[num] = 1;
        }
    }

    for(int k = 1; k < 10001; k++)
    {
        if(arr[k] == 0)
        {
               std::cout << k << '\n';
        }
    }
}

int main()
{
    SelfNumber();
}