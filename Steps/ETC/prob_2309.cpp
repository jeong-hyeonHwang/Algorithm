//2022.01.28
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int size = 9;
int temp[9];

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
    int dwarf[9];

    int delete1, delete2;
    int total = 0;
    
    for(int i=0; i< size; i++)
    {
        cin >> dwarf[i];
        total += dwarf[i];
    }

    mS(dwarf, 0, size, temp);

    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(total - (dwarf[i] + dwarf[j]) == 100)
            {
                delete1 = i;
                delete2 = j;
            }
        }
    }
    for(int i=0; i < size; i++)
    {
        if(i == delete1 && i == delete2)
            cout << dwarf[i] << '\n';
    }
}