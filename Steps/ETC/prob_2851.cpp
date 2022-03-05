//2022.03.05
#include <iostream>

using std::cin;
using std::cout;

int Abs(int a)
{
    return a > 0? a : -a;
}

int main()
{
    int mush[10];
    for(int i = 0; i < 10; i++)
    {
        mush[i] = 0;
        cin >> mush[i];
    }

    int sum = 0;
        for(int j = 0; j < 10; j++)
        {
            if(Abs(100 - (sum + mush[j])) < Abs(100 - sum))
                sum += mush[j];
            else if(Abs(100 - (sum + mush[j])) == Abs(100 - sum))
            {
                sum += mush[j];
                break;
            }
            else
            {
                break;
            }
        }

    cout << sum;
}
