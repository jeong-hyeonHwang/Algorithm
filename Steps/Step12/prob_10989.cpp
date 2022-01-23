//2022.01.23
#include <iostream>

using namespace::std;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int maxNum = 10000;
    int n;
    cin >> n;
    int countArr[maxNum + 1];
    
    for(int i=0; i<maxNum+1; i++)
    {
        countArr[i] = 0;
    }

    int max = 0;
    int min = 10001;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        countArr[num] += 1;
        if(max < num)
        {
            max = num;
        }
        if(min > num)
            min = num;
    }

    for(int i=min; i <max+1; i++)
    {
        for(int j =0; j < countArr[i]; j++)
            {
                cout << i << '\n';
            }
    }
}