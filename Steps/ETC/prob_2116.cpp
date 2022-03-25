//2022.03.25
#include <iostream>

using std::cin;
using std::cout;

int Downside(int num)
{
    int result = 0;
    switch(num)
    {
        case 0:
            result = 5;
            break;
        case 1:
            result = 3;
            break;
        case 2:
            result = 4;
            break;
        case 3:
            result = 1;
            break;
        case 4:
            result = 2;
            break;
        case 5:
            result = 0;
            break;
    }
    return result;
}

// 5 6 -> 4
// 6 4, 6 1 -> 5 more than 7
// 4 5 -> 6
int Most(int top, int down)
{
    if(top + down == 11)
        return 4;
    else if((top == 6 || down == 6))
        return 5;
    else
        return 6;
}

int main()
{
    int n;
    cin >> n;
    int** dice = new int*[n];
    for(int i=0; i < n; i++)
    {
        dice[i] = new int[6];
        for(int j=0; j < 6; j++)
        {
            cin >> dice[i][j];
        }
    }

    int topSide = 0;
    int downSide = 0;
    int result = 0;
    for(int i=0; i < 6; i++)
    {
        topSide = dice[0][i];
        downSide = dice[0][Downside(i)];
        int sum = 0;
        sum += Most(topSide, downSide);
        for(int j = 1; j < n; j++)
        {
            for(int k = 0; k < 6; k++)
            {
                if(downSide == dice[j][k])
                {
                    topSide = downSide;
                    downSide = dice[j][Downside(k)];
                    break;
                }
            }
            sum += Most(topSide, downSide);
        }
        result = sum > result? sum : result;
    }
    cout << result;
    

}