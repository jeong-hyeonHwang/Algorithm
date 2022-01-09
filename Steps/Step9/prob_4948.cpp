//2022.01.09
//Sieve of Eratosthenes

#include <iostream>

using namespace std;

int PrimeCount(int _n)
{
    if(_n == 1)
        return 1;
    int size = 2 * _n + 1;
    bool* Array = new bool[size];

    for(int i = 2; i <= size; i++)
    {
        Array[i] = true;
    }
    for (int i = 2; i * i <= size; i++)
	{
		if (Array[i])
			for (int j = i * i; j <= size; j += i)
			    Array[j] = false;
	}

    int count = 0;
    for(int i = _n+1; i < size; i++)
    {
        if(Array[i])
        {
            count += 1;
        }
    }

    return count;
}

int main()
{
    int n;
    do
    {
        cin >> n;
        
        if(n != 0)
            cout << PrimeCount(n) << '\n';
        else
            break;

    } while (n != 0);
}

// RUN, BUT TIME EXCEED.
// int main()
// {
//     int n;
//     do
//     {
//         cin >> n;
//         int count = 0;
//         if(n == 1)
//             count = 1;
//         else
//         {
//             for(int i = n+1; i <= 2 * n; i++)
//             {
//                 for(int j = 2; j < i; j++)
//                 {
//                     if(i % j == 0)
//                         break;
//                     else if(j == i - 1)
//                         count += 1;
//                 }
//             }
//         }

//         if(n != 0)
//             cout << count << '\n';

//     } while (n != 0);

// }