//2022.01.30
// ***주의해야하는 경우***
// 1. (2, 4)
// 2. (1, 1)

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    
    int gcd = 0;
    int lcm = 0;
    
    if(num1 == num2)
    {
        gcd = num1;
        lcm = num1;
        cout << gcd << '\n';
        cout << lcm;
        return 0;
    }
    
    int mainNum = num1 > num2? num1 : num2;
    int targetNum = num1 > num2? num2 : num1;
    
    while(targetNum != 0)
    {
        gcd = mainNum%targetNum;
        if(gcd == 0)
        {
            gcd = targetNum;
            break;
        }
        mainNum = targetNum;
        targetNum = gcd;
    }
    
    lcm = num1 * num2 / gcd;

    cout << gcd << '\n';
    cout << lcm;
}