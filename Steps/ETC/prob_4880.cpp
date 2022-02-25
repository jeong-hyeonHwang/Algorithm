//2022.02.25
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n1, n2, n3;

    while(true)
    {
        cin >> n1 >> n2 >> n3;
        if(n1 == 0 && n1 == n2 && n2 == n3)
            break;
        else
        {
            if(n2-n1 == n3 -n2)
            {
                cout << "AP " << n3 + (n2-n1);
            }
            else
            {
                cout << "GP " << n3 * (n2/n1);
            }
            cout << '\n';
        }
    }
}