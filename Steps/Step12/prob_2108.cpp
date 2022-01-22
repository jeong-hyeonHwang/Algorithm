//2022.01.22-2022.01.23
#include <iostream>
#include <cmath>

using namespace std;

int average = 0;
int middle = 0;
int mode = 0;
int range = 0;

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

int Absolute(int num)
{
    return num > 0? num : -num;
}

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    
    int* numArr = new int[n];
    int* temp = new int[n];
    for(int i=0; i< n; i++)
    {
        cin >>numArr[i];
        sum += numArr[i];
    }
    
    // 평균 구하기
    average = round((double)sum/n);
    
    mS(numArr, 0, n-1, temp);

    // 증간값 구하기
    middle = numArr[n/2];
    
    // 최빈값 구하기
    pair<int, int>*nums = new pair<int,int> [n];
    int mostCount = 0;
    int index = 0;
    int tempIndex = 0;
    for(int i=0; i<n; i = tempIndex)
    {
        tempIndex = i+1;
        int count = 1;
        nums[index].first = numArr[i];
        nums[index].second = count;
        if(n == 1)
            break;
        while(numArr[i] == numArr[tempIndex] && tempIndex < n)
        {
            count += 1;
            nums[index].second = count;
            tempIndex++;
        }
        index++;
    }
    
    int* sameNum = new int[n];
    index =1;
    for(int i=0; i <n; i++)
    {
        if(mostCount < nums[i].second)
       {
            mostCount = nums[i].second;
            sameNum[0] = nums[i].first;
            index = 1;
        }            
        else if(mostCount == nums[i].second)
        {
            sameNum[index] = nums[i].first;
            index+= 1;
        }
    }
    
    if(index != 1)
    {
        mode = sameNum[1];
    }
    else
        mode = sameNum[0];

    cout << average << '\n';
    cout << middle << '\n';
    cout << mode << '\n';
    
    // 범위 구하기
    range = Absolute(numArr[n-1] - numArr[0]);
    cout << range;

}
