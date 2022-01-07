//2022.01.07
#include <iostream>

using namespace std;

int HowManyPeopleNeed(int _k, int _n)
{

    int array[_k+1][_n];
    int fl = 0;
    for(int i =0; i <_n; i++)
    {
        array[0][i] = i+1;
    }
    for(int i = 1; i <=_k; i++)
    {
        for(int j = 0; j < _n; j++)
        {
            array[i][j] = array[i-1][j];
            if(j > 0)
                array[i][j] += array[i][j-1];
        }
    }
    return array[_k][_n-1];
}

int main()
{
    int t;
    cin >> t;
    int* result = new int[t];

    int k, n;
    for(int i = 0; i < t; i++)
    {
        cin >> k >> n;
        result[i] = HowManyPeopleNeed(k,n);
    }

    for(int i =0; i <t; i++)
    {
        cout << result[i] << '\n';
    }
}