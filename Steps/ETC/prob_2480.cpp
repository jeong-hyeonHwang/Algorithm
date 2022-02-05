//2022.02.05
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int dice[7];
    for(int i=0; i<7; i++)
    {
        dice[i] = 0;
    }
    
    int diceNum = 0;
    for(int i=0; i<3; i++)
    {
        cin >> diceNum;
        dice[diceNum] += 1;
    }
    int maxDiceN = 0;
    for(int i=1; i<7; i++)
    {
        if(dice[i] == 3)
        {
            cout << 10000 + i*1000;
            return 0;
        }
        else if(dice[i] == 2)
        {
            cout << 1000 + i*100;
            return 0;
        }
        else if(dice[i] == 1)
        {
            if(maxDiceN < i)
                maxDiceN = i;
        }
    }
    cout << maxDiceN*100;
}