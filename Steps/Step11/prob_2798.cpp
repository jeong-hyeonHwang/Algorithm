//2022.01.13
#include <iostream>

using namespace std;

int main()
{
    int cNum,m;
    cin >> cNum >> m;
    int* cardArr = new int[cNum];
    for(int i =0; i < cNum; i++)
    {
        cin >> cardArr[i];
    }

    int num = 0;
    for(int i =0; i < cNum - 2; i++)
    {
        for(int j = i+1; j < cNum - 1; j++)
        {
            for(int t = j + 1; t < cNum; t++)
            {
                if(num < cardArr[i] + cardArr[j] + cardArr[t] && cardArr[i] + cardArr[j] + cardArr[t] < m)
                {
                    num = cardArr[i] + cardArr[j] + cardArr[t];
                }
            }
        }
    }
    cout << num;
}