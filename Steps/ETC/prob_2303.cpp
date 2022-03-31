//2022.03.31
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::pair;
using std::sort;

int numArr[5];
int* pickNum;

bool* check;
pair<int, int>* max;
int result = 0;

void Pick3(int th, int depth)
{
    if(3 == depth)
    {
        result = 0;
        for(int i=0; i < 3; i++)
        {
            result += pickNum[i];
        }
        result = result % 10;
        if(max[th].first < result)
        {
            max[th].first = result;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        if(check[i] == false)
        {
            check[i] = true;
            pickNum[depth] = numArr[i];
            Pick3(th, depth + 1);
            check[i] = false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    max = new pair<int,int>[n];
    for(int i=0; i < n; i++)
    {
        check = new bool[5];
        pickNum = new int[3];
        max[i].first = 0;
        max[i].second = i + 1;
        for(int j=0; j < 5; j++)
        {
            cin >> numArr[j];
        }
        Pick3(i, 0);
    }
    sort(max, max+n);
    int tempVal = max[n-1].first;
    int tempNum = max[n-1].second;
    for(int i = n-1; i >= 0; i--)
    {
        if(tempVal == max[i].first)
        {
            if(max[i].second > tempNum)
            {
                tempNum = max[i].second;
            }
        }
        else
            break;
    }
    cout << tempNum;
}