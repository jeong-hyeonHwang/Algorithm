//2022.03.03
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int GCD(int a, int b)
{
    int origin = a > b? a: b;
    int divide = a > b? b: a;
    int temp = divide;
    while(divide > 0)
    {
        temp = divide;
        divide = origin % divide;
        origin = temp;
    }

    return origin;
}

int main()
{
    int num[5];
    for(int i=0; i < 5; i++)
    {
        cin >> num[i];
    }
    sort(num, num+5);
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int currentLCD = 0;
    int minLCD = 100000000;
    for(int i = 0; i <3; i++)
    {
        n1 = num[i];
        for(int j = i + 1; j < 4; j++)
        {
            n2 = num[j];
            currentLCD = n1 * n2 / GCD(n1, n2);
            for(int k = j+1; k < 5; k++)
            {
                n3 = num[k];
                int temp = currentLCD;
                currentLCD = currentLCD * n3 / GCD(n3, currentLCD);

                if(minLCD > currentLCD)
                    minLCD = currentLCD;
                    
                currentLCD = temp;
            }
        }
    }

    cout << minLCD;
    
}