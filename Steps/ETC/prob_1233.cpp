//2022.05.08
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int* n = new int[s1 + s2 + s3 + 1];

    int temp = 0;
    for(int i = 1; i <= s1; i++)
    {
        for(int j = 1; j <= s2; j++)
        {
            for(int k = 1; k <= s3; k++)
            {
                n[i+j+k] += 1;
            }
        }
    }

    int max = 0;
    int sum = 0;
    for(int i =1; i < s1 + s2 + s3; i++)
    {
        if(n[i] > max)
        {
            sum = i;
            max = n[i];
        }
    }

    cout << sum;
}