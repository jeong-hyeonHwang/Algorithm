//2022.02.20
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int num;
    while(true)
    {
        cin >> num;
        
        if(num == 0)
            break;

        if(num % n == 0)
        {
            cout << num << " is a multiple of " << n << ".\n";
        }
        else
        {
            cout << num << " is NOT a multiple of " << n << ".\n";
        }
    }
}