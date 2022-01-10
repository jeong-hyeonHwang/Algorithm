//2022.01.10
//Sieve of Eratosthenes

#include <iostream>

using namespace std;

int main()
{
    bool* arr;
    int size = 10000;
    arr = new bool[size];

    for(int i = 2; i <= size; i++)
    {
        arr[i] = true;
    }
    for (int i = 2; i * i <= size; i++)
	{
		if (arr[i])
		{
            for (int j = i * i; j <= size; j += i)
			    arr[j] = false;
        }
	}

    int num;
    cin >> num;

    int n = 0;

    for(int i=0; i < num; i++)
    {
        cin >> n;
        for(int i = n / 2; i > 0; i--)
        {
            if(arr[i] && arr[n-i])
            {
                cout << i << " " << n-i << '\n';
                break;
            }
        }
    }
}