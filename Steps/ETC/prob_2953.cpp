//2022.02.09
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int num = 0;
    int maxScore = 0;
    int pScore = 0;
    int score = 0;
    for(int i=0; i<5; i++)
    {
        score = 0;
        for(int j=0; j<4; j++)
        {
            cin >> pScore;
            score += pScore;
        }
        if(maxScore < score)
        {
            maxScore = score;
            num = i+1;
        }
    }
    cout << num << ' ' << maxScore;
}