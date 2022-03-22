//2022.03.22
#include <iostream>

using std::cin;
using std::cout;

void Factorization(int n)
{
    int temp = n;
    int divider = 2;
    int count = 0;
    while(temp != 1)
    {
        if(temp % divider == 0)
        {
            temp = temp / divider;
            count += 1; 
        }
        else
        {
            if(count != 0)
            {
                cout << divider << ' ' << count << '\n';
            }
            divider += 1;
            count = 0;
        }
    }
    if(count != 0)
    {
        cout << divider << ' ' << count << '\n';
    }
}

int main()
{
    int caseT;
    cin >> caseT;

    int num;
    for(int i=0; i < caseT; i++)
    {
        cin >> num;
        Factorization(num);
    }
}