//2022.02.20
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n1, n2;
    while(true)
    {
        cin >> n1 >> n2;
        if(n1 == 0 && n2 == 0)
            break;
        else
        {
            if(n1 > n2)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
}