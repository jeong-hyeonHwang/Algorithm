//2022.02.08
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int score = 0;
    int sum = 0;
    for(int i= 0; i<5; i++)
    {
        cin >> score;
        if(score < 40 )
            sum += 40;
        else
            sum += score;
    }
    cout << sum/5;
}