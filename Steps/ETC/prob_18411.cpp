//2022.03.17
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int main()
{
    int score[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> score[i];
    }
    sort(score, score+3);

    cout << score[1] + score[2];
}