//2022.02.04
#include <iostream>

using std::cin;
using std::cout;

int LCM(int n1, int n2)
{
    if(n1 == 1)
        return n2;
    else if(n2 == 1)
        return n1;
    else if(n1 == n2)
        return n1;
    int standard = n1 > n2? n1: n2;
    int devisor = n1 > n2? n2: n1;
    int temp = 0;
    while(devisor != 0)
    {
        temp = devisor;
        devisor = standard%devisor;
        standard = temp;
    }
    return n1*n2/standard;
}
int main()
{
    int t;
    cin >> t;
    int num1 = 0;
    int num2 = 0;
    for(int i=0; i<t; i++)
    {
        cin >> num1 >> num2;
        cout << LCM(num1, num2) << '\n';
    }
}