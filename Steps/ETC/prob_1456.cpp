//2022.03.10
//범위에 주의
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    
    int MAX = 10000001;
    long long a, b;
    
    bool* check = new bool[MAX];
    long long count = 0;
    vector<int> almost_prime;
    
    cin >> a >> b;
    
    for(long long i=2; i < MAX; i++)
    {
        if(check[i] == false)
        {
            almost_prime.push_back(i);
            for(long long j = 2 * i; j < MAX; j += i)
            {
                check[j] = true;
            }
        }
    }
    
    for(long long i=0; i < almost_prime.size(); i++)
    {
        long long temp = almost_prime[i];
        while(temp <= b / almost_prime[i]) // Overflow 방지를 위함
        {
            temp *= almost_prime[i];
            if(temp >= a)
            {
                count += 1;
            }
        }
    }
    cout << count;
}