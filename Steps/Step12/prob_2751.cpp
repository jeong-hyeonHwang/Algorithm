//2022.01.18-2022.01.20
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

// 최악의 경우 n제곱의 시간이 걸려, 시간 초과로 실패
// void qS(int left, int right, int* arr)
// {
//     if(left >= right)
//     {
//         return;
//     }
    
//     int i = left;
//     int &pivot = arr[right];
//     for(int j = left; j < right; ++j)
//     {
//         if(arr[j] < pivot)
//         {
//             std::swap(arr[i++], arr[j]);
//         }
//     }
//     std::swap(arr[i], pivot);
        
//         qS(left, i-1, arr);
//         qS(i+1, right, arr);
    
// }

int main()
{
    int n;
    cin >> n;
    int* numArr = new int[n];
    int* tempArr = new int[n];
    for(int i =0; i< n; i++)
    {
        cin >> numArr[i];
    }


    mS(numArr, 0, n-1, tempArr);

    for(int i =0; i< n; i++)
    {
        cout << numArr[i] << '\n';
    }
}
