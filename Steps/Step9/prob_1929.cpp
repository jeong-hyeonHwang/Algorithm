//2022.01.09
//Sieve of Eratosthenes

#include <iostream>

using namespace std;

void PrimeIs(int _m, int _n)
{
    bool* Array = new bool[_n+1];

    for(int i = 2; i <= _n; i++)
    {
        Array[i] = true;
    }
    for (int i = 2; i * i <= _n; i++)
	{
		if (Array[i])
			for (int j = i * i; j <= _n; j += i)
			    Array[j] = false;
	}

    for(int i = _m; i <= _n; i++)
    {
        if(Array[i])
        {
            cout << i << '\n';
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    PrimeIs(m,n);
}

// RUN, BUT TIME EXCEED.
// int main()
// {
//     int m, n;
//     cin >> m >> n;

//     for(int i =m; i <= n; i++)
//     {
//         for(int j = 2; j < i; j++)
//         {
//             if(i % j == 0)
//                 break;
//             else if(j == i - 1)
//                 cout << i << '\n';
//         }
//     }
// }