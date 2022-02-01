//2022.02.01
#include <iostream>

using std::cin;
using std::cout;

void mS(int exist[], int left, int right, int temp[])
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
        else if(exist[i] < exist[j])
        {
            temp[k] = exist[i];
            i += 1;
        }
        else
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
    int* a = new int[n];
    int* b = new int[n];
    int* temp = new int[n];
    for(int i=0; i <n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i <n; i++)
    {
        cin >> b[i];
    }
    mS(a, 0, n-1, temp);
    mS(b, 0, n-1, temp);

    int result = 0;
    for(int i=0; i < n; i++)
    {
        result += a[n-i-1] * b[i];
    }
    cout << result;
}