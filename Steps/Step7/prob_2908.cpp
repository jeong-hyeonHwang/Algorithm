//2022.01.05
#include <iostream>

using namespace std;

int changer(int num)
{
    
    int n1;
    int n10;
    int n100;

    n1 = num / 100;
    n10 = num % 100 / 10;
    n100 = num % 10;

    return n1 + n10 * 10 + n100 * 100;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    num1 = changer(num1);
    num2 = changer(num2);

    if(num1 > num2)
        cout << num1;
    else if(num1 < num2)
        cout << num2;
}
