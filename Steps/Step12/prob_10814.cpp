//2022.01.21
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::pair;

void mS(pair<int,string> exist[], int left, int right, pair<int,string> temp[])
{
    if(left >= right)
        return;
        
    int middle = (left+right)/2;
    
    mS(exist, left, middle, temp);
    mS(exist, middle+1, right, temp);
    
    int i = left;
    int j = middle+1;
    int k = left; // for temp arr setup
    
    while(k <= right)
    {
        
        if(i > middle) // 나뉜 정렬 범위 이상의 인덱스에 해당하는 케이스 1
        {
            temp[k] = exist[j];
            j+= 1;
        }
        else if( j > right) // 나뉜 정렬 범위 이상의 인덱스에 해당하는 케이스 2
        {
            temp[k] = exist[i];
            i += 1;
        }
        else if(exist[i].first <= exist[j].first)
        {
            temp[k] = exist[i];
            i += 1;
        }
        else if(exist[i].first > exist[j].first)
        {
            temp[k] = exist[j];
            j +=1;
        }
        
        k++;
    }
    
    for(int t = left; t <= right; t++)
    {
        exist[t] = temp[t];
    }
}

int main()
{
    int n;
    cin >> n;

    // pair int: age
    // pair string: name
    pair<int, string>* pInfo = new pair<int, string> [n];
    pair<int, string>* temp = new pair<int, string> [n];
    for(int i =0; i <n; i++)
    {
        cin >> pInfo[i].first >> pInfo[i].second;
    }
    
    mS(pInfo, 0, n-1, temp);
    
    for(int i =0; i <n; i++)
    {
        cout << pInfo[i].first << " " << pInfo[i].second << '\n';
    }
}