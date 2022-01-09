//2022.01.09
#include <iostream>

int NextPrime(int num)
{
    int t = num;
    while(true)
    {
        t += 1;
        for(int i = 2; i < t; i++)
        {
            if(t % i == 0) // 소수가 아닌 경우
                continue;
            else
                return t;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    while(true)
    {
        if(n == 1)
            return 0;
        else
        {
            int prime = 2;
            while(n != 1)
            {
                if(n % prime == 0)
                {
                    n = n/prime;
                    std::cout << prime << '\n';
                }
                else
                {
                    prime = NextPrime(prime);
                }
            }
        }
    }
}